// 在这里负责 uart 模块的初始化操作和队列判断是否为满

#include <stdint.h>

#define UART_BASE 0x10000000

// 寄存器地址偏移
#define UART_RBR_THR (*((volatile uint8_t *)(UART_BASE + 0x00)))  // 接收/发送缓冲寄存器
#define UART_IER_DLM (*((volatile uint8_t *)(UART_BASE + 0x01)))  // 中断使能寄存器/除数锁存器
#define UART_IIR_FCR (*((volatile uint8_t *)(UART_BASE + 0x02)))  // 中断识别寄存器/FIFO控制寄存器
#define UART_LCR     (*((volatile uint8_t *)(UART_BASE + 0x03)))  // 线路控制寄存器
#define UART_MCR     (*((volatile uint8_t *)(UART_BASE + 0x04)))  // 调制解调器控制寄存器
#define UART_LSR     (*((volatile uint8_t *)(UART_BASE + 0x05)))  // 线路状态寄存器（只读）
#define UART_MSR     (*((volatile uint8_t *)(UART_BASE + 0x06)))  // 调制解调器状态寄存器（只读）
#define UART_SCR     (*((volatile uint8_t *)(UART_BASE + 0x07)))  // 暂存寄存器
#define UART_LSR_THRE (1 << 5)

// 初始化寄存器，设置波特率，字符长度，校验位，停止位
void uart_init(uint32_t baud) {
    // 设置波特率
    uint32_t divisor = 1;
    UART_LCR |= 0x80; // 设置DLAB位，允许访问DLL和DLM寄存器
    UART_RBR_THR = (uint8_t)(divisor & 0xFF); // 设置DLL
    UART_IER_DLM = (uint8_t)((divisor >> 8) & 0xFF); // 设置DLM
    UART_LCR &= ~0x80; // 清除DLAB位

    // 设置数据格式：8位数据，无校验，1位停止位
    UART_LCR = 0x03;

    // 启用FIFO，清空接收和发送FIFO
    UART_IIR_FCR = 0x07;

    // 启用接收中断
    UART_IER_DLM = 0x01;
}

// 判断发送队列是否为空（可以发送新数据）
int uart_tx_empty() {
    return (UART_LSR & UART_LSR_THRE) != 0;
}

// 阻塞发送：等待发送完成
void uart_flush() {
    while (!uart_tx_empty());
}
