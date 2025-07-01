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
#include <memory/vaddr.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

static word_t eval(int p, int q);
static bool check_parentheses(int p, int q);
static int get_priority(int type);
static int find_main_op(int p, int q);

enum {
  TK_NOTYPE = 256, TK_EQ,

  /* TODO: Add more token types */

  TK_NUM,         // 数字
  TK_HEX,         // 十六进制数 
  TK_REG,         // 寄存器
  TK_NEQ,         // 不等于 !=
  TK_AND,         // 逻辑与
  TK_OR,          // 逻辑或
  TK_DEREF,       // 解引用 *
  TK_NEG,         // 负号
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"0[xX][0-9a-fA-F]+", TK_HEX},
  {"[0-9]+", TK_NUM},
  {"\\$[a-zA-Z0-9]+", TK_REG},
  
  {"==", TK_EQ},        // equal
  {"!=", TK_NEQ},
  {"&&", TK_AND},
  {"\\|\\|", TK_OR},

  {"\\+", '+'},         // plus
  {"-", '-'},
  {"\\*", '*'},
  {"/", '/'},
  {"\\(", '('},
  {"\\)", ')'},
  
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        
        // 将识别到的token记录到tokens数组中
        switch (rules[i].token_type) {
          case TK_NOTYPE: // 空格不需要被记录
            break;
          
            case TK_NUM:
            case TK_HEX:
            case TK_REG:
              if (nr_token >= 32) {
                printf("Too many tokens!\n");
                return false;
              }

            tokens[nr_token].type = rules[i].token_type;
            // 复制字符串，注意长度限制
            int copy_len = substr_len < 31 ? substr_len : 31;
            strncpy(tokens[nr_token].str, substr_start, copy_len);
            tokens[nr_token].str[copy_len] = '\0';
            nr_token ++ ;
            break;

          default:
              // 对于操作符，只需要记录类型
              if (nr_token >= 32) {
                printf("Too many tokens!\n");
                return false;
              }
              tokens[nr_token].type = rules[i].token_type;
              // 
              int op_copy_len = substr_len < 31 ? substr_len : 31;
              strncpy(tokens[nr_token].str, substr_start, op_copy_len);
              tokens[nr_token].str[op_copy_len] = '\0';
              nr_token ++ ;
              break ; 
      
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  
  
  // 处理一元运算符
  for (i = 0; i < nr_token; i++) {
    if (tokens[i].type == '*' && 
      (i == 0 || (tokens[i - 1].type != TK_NUM &&
                  tokens[i - 1].type != TK_HEX &&
                  tokens[i - 1].type != TK_REG &&
                  tokens[i - 1].type != ')' ))) {
        tokens[i].type = TK_DEREF; // 将 * 转换为解引用操作符
        // 如果‘*’在开头或前面的不是数值/寄存器/右括号，则为解饮用
    }

    // 如果‘-’在开头或前面不是数值/寄存器/右括号，则为负号
    if (tokens[i].type == '-' &&
      (i == 0 || (tokens[i - 1].type != TK_NUM &&
                  tokens[i - 1].type != TK_HEX &&
                  tokens[i - 1].type != TK_REG &&
                  tokens[i - 1].type != ')' ))) {
        tokens[i].type = TK_NEG; // 将 - 转换为负号
    }
  }  
  
  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  
  // 检查是否有token
  if (nr_token == 0) {
    *success = false;
    return 0;
  }

  *success = true;
  return eval(0, nr_token - 1); // 从第一个token到最后一个token进行求值

  return 0;
}

// 检查括号是否匹配
static bool check_parentheses (int p, int q) {
  if (tokens[p].type != '(' || tokens[q].type != ')') {
    return false ; // 如果不是括号对，则返回false
  }

  int count = 0;
  for (int i = p; i <= q; i ++ ) {
    if (tokens[i].type == '(') {
      count ++ ; // 遇到左括号，计数加1
    } else if (tokens[i].type == ')') {
      count -- ; // 遇到右括号，计数减1
      if (count == 0 && i < q) {
        // 如果括号在中间就匹配了，说明不是被一对括号包围
        return false ; 
      }
    }
  }

  return count == 0; // 如果计数为0，说明括号匹配正确
}

// 获取操作符的优先级
static int get_priority(int type) {
  switch (type) {
    case TK_OR: return 1;
    case TK_AND: return 2;
    case TK_EQ:
    case TK_NEQ: return 3;
    case '+':
    case '-': return 4;
    case '*':
    case '/': return 5;
    case TK_DEREF: // 一元操作符优先级最高
    case TK_NEG: return 6;
    default: return 0; // 非操作符返回0
  
  }
}

// 查找主运算符
static int find_main_op (int p, int q) {
  int main_op = -1;
  int min_priority = 999;
  int paren_count = 0;

  // 从左到右扫描，找到优先级最低的为主运算符
  for (int i = q; i >= p; i -- ) {
    if (tokens[i].type == ')') {
      paren_count ++ ;
    } 
    else if (tokens[i].type == '(') {
      paren_count -- ;
    }
    // 括号刚好匹配的情况下
    else if (paren_count == 0) {
      int priority = get_priority(tokens[i].type);
      if (priority > 0 && priority <= min_priority) {

        // 单独考虑合适位置的一元运算符
        if (tokens[i].type == TK_DEREF || tokens[i].type == TK_NEG) {
          if (i == p || get_priority(tokens[i - 1].type) > 0) {
            min_priority = priority;
            main_op = i; // 一元操作符优先级最高
          }
        }

        else {
          min_priority = priority;
          main_op = i; 
        }

      }
    }
  }

  return main_op; // 返回主运算符的位置
}

static word_t eval (int p, int q) {
  if (p > q) {
    panic("Bad expression: p > q");
  }

  else if (p == q) {
    switch (tokens[p].type) {
      case TK_NUM: return strtoul(tokens[p].str, NULL, 10);
      case TK_HEX: return strtoul(tokens[p].str, NULL, 16);
      case TK_REG: 

        bool success = false;
        word_t reg_val = isa_reg_str2val(tokens[p].str + 1, &success);
        if (!success) {
          panic("Invalid register name: %s", tokens[p].str);
        }
        return reg_val; // 返回寄存器的值
      default:
        panic("Unkown token type in single token: %d", tokens[p].type);
    }
  }

  // 如果表达式被一对括号包围，去掉括号
  else if (check_parentheses(p, q) == true) {
    return eval(p + 1, q - 1);
  }

  else {
    int op = find_main_op(p, q);
    if (op == -1) {
      panic("No main operator found");
    }
  
    int op_type = tokens[op].type;

    // 处理一元运算符
    if (op_type == TK_DEREF) {
      word_t addr = eval(op + 1, q);
      return vaddr_read(addr, 4); // 解引用操作符，读取内存
    }
    else if (op_type == TK_NEG) {
      word_t val = eval(op + 1, q);
      return -val; // 负号操作符，返回相反数
    }

    // 处理二元运算符
    word_t val1 = eval(p, op - 1); // 递归处理运算符左边
    word_t val2 = eval(op + 1, q); // 递归处理运算符右边

    switch (op_type) {
      case '+': return val1 + val2; // 加法
      case '-': return val1 - val2; // 减法
      case '*': return val1 * val2; // 乘法
      case '/': 
        if (val2 == 0) {
          panic("Division by zero");
        }
        return val1 / val2; // 除法
      case TK_EQ: return val1 == val2; // 等于
      case TK_NEQ: return val1 != val2; // 不等于
      case TK_AND: return val1 && val2; // 逻辑与
      case TK_OR: return val1 || val2; // 逻辑或
      default:
        panic("Unknown operator type: %d", op_type);
    }
  }
}