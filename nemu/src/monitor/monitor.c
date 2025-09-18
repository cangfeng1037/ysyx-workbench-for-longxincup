/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm();

// 删掉welcome程序

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

#ifdef CONFIG_FTRACE  // 添加条件编译
#define MAX_SYMBOLS 1024
typedef struct {
  char name[64];
  uint32_t addr;
  uint32_t size;
} Func_Info;  // 修复：Func_Info（大写I）

Func_Info symbols[MAX_SYMBOLS];  // 修复：使用正确的类型名
int nr_symbols = 0;
bool ftrace_enabled = false;

static void load_elf(FILE *fp) {
  long pos = ftell(fp);
  fseek(fp, 0, SEEK_SET);

  Elf32_Ehdr elf_header;  // 修复：Elf32_Ehdr（不是ELF32_Ehdr）
  if (fread(&elf_header, sizeof(Elf32_Ehdr), 1, fp) != 1) return;  // 修复：检查返回值

  Elf32_Shdr *sh_table = malloc(sizeof(Elf32_Shdr) * elf_header.e_shnum);
  fseek(fp, elf_header.e_shoff, SEEK_SET);
  if (fread(sh_table, sizeof(Elf32_Shdr), elf_header.e_shnum, fp) != elf_header.e_shnum) {
    free(sh_table);
    return;
  }

  // 读取字符串表
  Elf32_Shdr *sh_strtab = &sh_table[elf_header.e_shstrndx];
  char *shstrtab = malloc(sh_strtab->sh_size);  // 修复：变量名 shstrtab
  fseek(fp, sh_strtab->sh_offset, SEEK_SET);
  if (fread(shstrtab, sh_strtab->sh_size, 1, fp) != 1) {
    free(sh_table);
    free(shstrtab);
    return;
  }

  // 查找符号表
  Elf32_Sym *symtab = NULL;  // 修复：使用 Elf32_Sym 而不是 Elf32_Shdr
  int symtab_entries = 0;
  char *sym_strtab = NULL;

  for (int i = 0; i < elf_header.e_shnum; i++) {
    if (sh_table[i].sh_type == SHT_SYMTAB) {
      // 找到符号表
      fseek(fp, sh_table[i].sh_offset, SEEK_SET);
      symtab = malloc(sh_table[i].sh_size);
      if (fread(symtab, sh_table[i].sh_size, 1, fp) != 1) {
        free(symtab);
        symtab = NULL;
        break;
      }
      symtab_entries = sh_table[i].sh_size / sizeof(Elf32_Sym);

      // 找到符号表对应的字符串表
      Elf32_Shdr *sym_strtab_hdr = &sh_table[sh_table[i].sh_link];
      sym_strtab = malloc(sym_strtab_hdr->sh_size);
      fseek(fp, sym_strtab_hdr->sh_offset, SEEK_SET);
      if (fread(sym_strtab, sym_strtab_hdr->sh_size, 1, fp) != 1) {
        free(sym_strtab);
        sym_strtab = NULL;
      }
      break;
    }
  }

  // 解析符号表，提取函数信息
  if (symtab && sym_strtab) {
    nr_symbols = 0;
    for (int i = 0; i < symtab_entries && nr_symbols < MAX_SYMBOLS; i++) {
      if (ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC && symtab[i].st_value != 0) {
        strncpy(symbols[nr_symbols].name, &sym_strtab[symtab[i].st_name], 63);
        symbols[nr_symbols].name[63] = '\0';
        symbols[nr_symbols].addr = symtab[i].st_value;
        symbols[nr_symbols].size = symtab[i].st_size;
        nr_symbols++;
      }
    }
    Log("Found %d functions in the ELF file.", nr_symbols);
    ftrace_enabled = (nr_symbols > 0);
  }

  // 释放内存
  free(sh_table);
  free(shstrtab);  // 修复：使用正确的变量名
  if (symtab) free(symtab);
  if (sym_strtab) free(sym_strtab);

  // 恢复文件位置
  fseek(fp, pos, SEEK_SET);
}

Func_Info* find_func(uint32_t addr) {  // 修复：移除static，因为需要在其他文件中使用
  for (int i = 0; i < nr_symbols; i++) {
    if (symbols[i].addr <= addr && addr < symbols[i].addr + symbols[i].size) {
      return &symbols[i];
    }
  }
  return NULL;
}
#endif  // CONFIG_FTRACE

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);


  char magic[4];

  if(fread(magic, 1, 4, fp) != 4) {
    fclose(fp);
    Log("Can not read the magic number from '%s'", img_file);
    return 4096;
  }

  if (magic[0] == 0x7f && magic[1] == 'E' && magic[2] == 'L' && magic[3] == 'F') {
    Log("Detected ELF file: %s", img_file);
    load_elf(fp);
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}


static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"ftrace"   , no_argument      , NULL, 'f'},
    {"elf"      , required_argument, NULL, 'e'}, // 用于指定 ELF 文件
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };

  char *elf_file = NULL; // 储存elf文件路径



  int o;
  while ( (o = getopt_long(argc, argv, "-bfhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break; // 参数中传入-b，进入nemu批处理模式
      case 'f':
                #ifdef CONFIG_FTRACE
                ftrace_enabled = true; 
                Log("Function call tracing enabled.");
                #endif
                break;
      case 'e':
                #ifdef CONFIG_FTRACE
                elf_file = optarg;
                Log("ELF file for function symbols: %s", elf_file);
                #endif
                break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; break;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-f,--ftrace             enable function call tracing\n");  // 添加帮助信息
        printf("\t-e,--elf=ELF_FILE       specify ELF file for symbol information\n");
        printf("\n");
        exit(0);
    }
  }
  
  #ifdef CONFIG_FTRACE
  if (elf_file) {
    FILE *fp = fopen(elf_file, "rb");
    Log("ELF file for function symbols: %s", elf_file);
    if (fp) {
      load_elf(fp);
      Log("function symbols loaded from %s", elf_file);
      fclose(fp);
    } else {
      Log("Failed to open ELF file: %s", elf_file);
    }
  } 
  #endif

  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  //sdb_set_batch_mode();

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm());

  /* Display welcome message. */
  // welcome();
}
#else //CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  //welcome();
}
#endif
