ENTRY(_start)
PHDRS { fsbl PT_LOAD; ssbl PT_LOAD; app PT_LOAD; bss PT_LOAD; }

MEMORY {
  /* 片上 ROM（当前启动方案未直接使用，保留地址定义便于后续切换到 MROM 启动） */
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  /* SPI Flash 的 XIP 映射窗口：镜像在仿真中由 top.cpp 直接加载到该区域 */
  flash : ORIGIN = 0x30000000, LENGTH = 16M
  /* 片上 SRAM：当前方案不放置主要运行段，保留给后续小数据/特殊用途 */
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
  /* PSRAM：应用运行区（代码/只读数据/可写数据/bss/堆/栈都在这里） */
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  /* SDRAM, 程序转到SDRAM上运行*/
  sdram : ORIGIN = 0xa0000000, LENGTH = 32M
}

/* 两级引导布局
   FSBL：常驻flash执行
   SSBL：flash存储，拷贝到 PSRAM 低地址执行
   APP： flash存储，拷贝到 PSRAM 高地址执行 
*/

SECTIONS {
  /*
   * 镜像整体起始地址：
   * _flash_start 与 _entry_offset 由构建脚本通过 LDFLAGS 注入，
   * 当前 ysyxSoC 平台通常等价于 0x30000000 + 0。
   */
  . = _flash_start + _entry_offset;

  /* FSBL 段 */
  .fsbl : ALIGN(4) {
    KEEP(*(entry))
    *(.fsbl.text*)
    *(.fsbl.rodata*)
  } > flash AT> flash : fsbl
  _fsbl_start = ADDR(.fsbl);
  _fsbl_end = .;

  _ssbl_base = ABSOLUTE(ORIGIN(sdram));  /* SSBL 在 SDRAM 的起始地址 */

  /* SSBL段 VMA 在SDRAM，LMA 在Flash */
  . = _ssbl_base;
  _ssbl_vma_start = .;
  .ssbl : ALIGN(4) {
    *(.ssbl.entry*)
    *(.ssbl.text*)
    *(.ssbl.rodata*)
  } > sdram AT> flash : ssbl
  _ssbl_vma_end = .;
  _ssbl_lma_start = LOADADDR(.ssbl);

  /* APP段 */
  /*
   * 从这里开始切换到 PSRAM 运行地址（VMA）：
   * 注意仅“运行地址”在 PSRAM，镜像“加载地址（LMA）”仍在 Flash。
   */
  _app_base = ABSOLUTE(ORIGIN(sdram) + 0x10000);
  /*
   * 应用主段 .app：
   * - VMA: sdram   （CPU 跳转后在此执行）
   * - LMA: flash   （bootloader 从 flash 拷贝到 sdram）
   * 放置顺序：
   * 1) .text.app_entry*   -> _sdram_entry 建议放这里，确保入口在 app 起始附近
   * 2) .text* / .rodata*  -> 应用代码与只读常量
   * 3) .data*             -> 已初始化可写数据
   */
  .app _app_base : ALIGN(4) {
    _app_vma_start = .;
    *(.text.app_entry*)
    *(.text*)
    *(.rodata*)
    *(.srodata*)

    . = ALIGN(4);
    _sdata = .;
    _data = .;
    *(.data*)
    *(.sdata*)
    *(.sdata.*)
    *(.gnu.linkonce.s.*)
    _edata = .;
  } > sdram AT> flash : app
  _app_lma_start = LOADADDR(.app);

  /* 兼容 extra.ld 的 .data 锚点（内容已在 .app 中收集） */
  /* 空的 .data 段，仅作为插入点使用 */
  .data : ALIGN(4) {
  } > sdram AT> flash : app
  /*
   * APP 拷贝上界放在 .data 锚点之后：
   * 这样 extra.ld 通过 INSERT BEFORE .data 注入的 .data.extra
   * 也会被 SSBL 一并从 flash 拷贝到 sdram。
   */
  _app_vma_end = .;

  /*
   * 兼容旧符号：
   * 一些已有代码仍用 _sidata/_sdata/_edata 语义来做 data 拷贝，
   * 这里给出兼容映射，确保旧代码在新段布局下仍能工作。
   * _sidata 必须指向 .data 在 flash 中对应的真实加载地址，
   * 不能直接等于 _app_lma_start（那是 .app 起点，前面还有 text/rodata）。
   */
  _sidata = _app_lma_start + (_sdata - _app_vma_start);
  _data = _sdata;
  edata = _edata;

  /*
   * .bss 段（NOLOAD）：
   * 仅分配运行地址，不在镜像中占用文件空间，
   * 由 bootloader 在跳转前手动清零。
   */
  .bss (NOLOAD) : ALIGN(4) {
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > sdram : bss

  /*
   * 兼容 extra.ld 的 .bss.extra 插入：
   * - 若存在 __am_apps_bss_start/__am_apps_bss_end，则清零区间覆盖它；
   * - 否则退化为主 .bss 区间。
   */
  _bss_start = DEFINED(__am_apps_bss_start) ? __am_apps_bss_start : ADDR(.bss);
  _bss_end = MAX(., DEFINED(__am_apps_bss_end) ? __am_apps_bss_end : .);

  _heap_start = ALIGN(8);
  _app_heap_start = _heap_start;
  end = .;
  _end = .;

  /*
   * 运行时内存边界符号：
   * - _stack_pointer: 栈顶放在 SDRAM 顶部（栈向低地址生长）
   */
  _stack_pointer = ORIGIN(sdram) + LENGTH(sdram);
  _app_stack_pointer = _stack_pointer;

  ASSERT(_ssbl_vma_end <= _app_base, "SSBL overlaps APP")
  /* 防御性检查：确保链接结果没有超出 SDRAM 空间 */
  ASSERT(_stack_pointer <= ORIGIN(sdram) + LENGTH(sdram), "SDRAM overflow")
}
