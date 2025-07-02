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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  char expr[64]; // 储存表达式字符串
  word_t old_value; // 储存表达式的旧值
  bool enabled; // 是否启用监视点

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp();
void free_wp(WP *wp);

WP* new_wp() {
  if (free_ == NULL) {
    assert(0 && "No more watchpoints available!");
  }

  WP *wp = free_;
  free_ = free_ -> next;

  wp -> next = head;
  head = wp;

  // 初始化监视点
  wp -> enabled = true; 
  wp -> old_value = 0; 
  wp -> expr[0] = '\0'; 

  return wp;
}

void free_wp(WP *wp) {
  if (wp == NULL) {
    return ;
  }

  if(head == wp) {
    head = head -> next;
  }

  else {
    WP *prev = head;
    while (prev != NULL && prev -> next != wp) { // 遍历找前序
      prev = prev -> next;
    }

    if (prev != NULL) {
      prev ->next = wp -> next;
    }
    else {
      printf("Warning: Watchpoint not found in the list.\n");
      return;
    }
  }

  wp -> next = free_;
  free_ = wp;

  wp -> expr[0] = '\0'; // 清空表达式
  wp -> old_value = 0; // 清空旧值
  wp -> enabled = false; // 禁用监视点

}

WP* find_wp(int no) {
  WP *wp = head;
  while (wp != NULL) {
    if (wp -> NO == no) return wp;
    wp = wp -> next;
  }

  return NULL;
}

WP* create_watchpoint (char *expr_str) {
  
  // 验证表达式是否有效
  bool success = false;
  word_t value = expr(expr_str, &success);

  if (!success) {
    printf("Error: Invalid expression '%s'.\n", expr_str);
    return NULL;
  }

  // 申请新的监视点
  WP *wp = new_wp();
  if (wp == NULL) {
    return NULL;
  }

  // 设置监视点信息
  strncpy(wp -> expr, expr_str, sizeof(wp -> expr) - 1);
  wp -> expr[sizeof(wp -> expr) - 1] = '\0';
  wp -> old_value = value;
  wp -> enabled = true;

  printf("Watchpoint %d: %s\n", wp -> NO, wp -> expr);
  return wp;
}

// 删除指定编号的监视点
bool delete_watchpoint(int no) {
  WP *wp = find_wp(no);
  if (wp == NULL) {
    printf("""Error: Watchpoint %d not found.\n", no);
    return false;
  }

  printf("Watchpoint %d deleted.\n", wp -> NO);
  free_wp(wp);
  return true;
}

// 打印所有监视点
void print_watchpoints() {
  if (head == NULL) {
    printf("No watchpoints set.\n");
    return;
  }

  printf("Watchpoints:\n");
  WP *wp = head;
  while (wp != NULL) {
    printf("%-8d watchpoint     keep %s   %-10s %s\n", 
           wp->NO, 
           wp->enabled ? "y" : "n",
           wp->enabled ? "y" : "n", 
           wp->expr);
    wp = wp->next;
  }
}

// 检查所有监视点，返回是否触发了监视点
bool check_watchpoints() {
  bool hit = false;
  WP *wp = head;

  while (wp != NULL) {
    if (wp -> enabled && wp -> expr[0] != '\0') {
      bool success = false;
      word_t new_value = expr(wp -> expr, &success);

      if (success && new_value != wp -> old_value) {
        printf("Hardware watchpoint %d: %s\n", wp -> NO, wp -> expr);
        printf("Old value = %u (0x%08x)", wp -> old_value, wp -> old_value);
        printf("New value = %u (0x%08x)\n", new_value, new_value);

        wp -> old_value = new_value; // 更新旧值
        hit = true;
      }
    }

    wp = wp -> next;
  }

  return hit; // 返回是否有监视点被触发
}