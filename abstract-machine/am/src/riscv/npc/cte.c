#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {                 
 
  if (user_handler) {
    Event ev = {0};
    uintptr_t mcause = c->mcause;
    bool is_irq = (mcause >> (sizeof(mcause) * 8 - 1)) & 1;

    if (!is_irq) {
      switch (mcause & 0xfff) {
        case 11:  ev.event = EVENT_YIELD; 
                  c->mepc += 4;
                  break;
        default:  ev.event = EVENT_ERROR; break;
      }
    } else {
      ev.event = EVENT_ERROR;
    }
    // 调用了事件处理函数
    if (ev.event == EVENT_ERROR) {
      static int err_cnt = 0;
      if (err_cnt < 16) {
        // NOTE: klib printf may not support length modifiers like "%lx".
        // Use 32-bit formats to avoid argument misalignment on riscv32.
        printf("[cte] EVENT_ERROR: mcause=0x%x (is_irq=%d, code=0x%x) mepc=0x%x mstatus=0x%x GPR1=0x%x\n",
               (unsigned)mcause, (int)is_irq, (unsigned)(mcause & 0xfff),
               (unsigned)c->mepc, (unsigned)c->mstatus, (unsigned)c->GPR1);
        err_cnt++;
      }
    }
    c = user_handler(ev, c);
    // 输出c
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);


// 修改am_asm_trap,是其从am_irq_handle返回后，跳转到新进程的入口，从而实现上下文的切换
// am_asm_trap需要：1.保存异常发生后的上下文 2. 调用am_irq_handle 
//                 3. 先切换栈顶指针到新的上下文结构，再恢复原进程的上下文

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;


  return true;
}

// 在kstack的底部创建以entry为入口函数的上下文，并返回该上下文的指针
Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  uintptr_t *sp = (uintptr_t *)((uintptr_t)kstack.end & ~0xf);

  sp -= sizeof(Context) / sizeof(uintptr_t);
  Context *ctx = (Context *)sp;

  for (int i = 0; i < NR_REGS; i ++ ) {
    ctx->gpr[i] = 0;
  }

  ctx->gpr[10] = (uintptr_t)arg;  // a0 = arg
 
  // 设置 mepc为 entry 地址
  ctx->mepc = (uintptr_t)entry;

  ctx->mstatus = 0x1800; 

  return ctx;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
