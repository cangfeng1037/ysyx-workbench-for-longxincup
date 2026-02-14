// SPI 控制器的初始化与测试

#include <stdint.h>
#include <stdio.h>

// 基地址
#define SPI_BASE 0x10001000

#define SPI_TX0   (*((volatile uint32_t *)(SPI_BASE + 0x00)))  // 传输数据寄存器0
#define SPI_RX0   (*((volatile uint32_t *)(SPI_BASE + 0x00)))  // 接收数据寄存器0
#define SPI_TX1   (*((volatile uint32_t *)(SPI_BASE + 0x04)))  
#define SPI_RX1   (*((volatile uint32_t *)(SPI_BASE + 0x04)))  
#define SPI_TX2   (*((volatile uint32_t *)(SPI_BASE + 0x08)))  
#define SPI_RX2   (*((volatile uint32_t *)(SPI_BASE + 0x08)))
#define SPI_TX3   (*((volatile uint32_t *)(SPI_BASE + 0x0C)))
#define SPI_RX3   (*((volatile uint32_t *)(SPI_BASE + 0x0C)))
#define SPI_CTRL  (*((volatile uint32_t *)(SPI_BASE + 0x10)))
#define SPI_DIV   (*((volatile uint32_t *)(SPI_BASE + 0x14)))

#define SPI_SS    (*((volatile uint32_t *)(SPI_BASE + 0x18))) 
// ss 默认全为1，低电平选中设备
// 0为flash，7为bitrev

void spi_init() {
    SPI_DIV = 1;

    // CHAR_LEN = 64, LSB = 0, IE = 0, ASS = 1
    SPI_CTRL = (64 << 0) | (0 << 12) | (1 << 13);
}

void bitrev_select() {
    SPI_SS = (1 << 7) & 0xFF;
}

void bitrev_deselect() {
    SPI_SS = 0x00;
}

uint8_t bitrev_transfer(uint8_t data) {
    SPI_TX0 = data << 8;

    SPI_CTRL |= (1 << 8);

    while (SPI_CTRL & (1 << 8)); // 等待完成

    return SPI_RX0;
}

void test_bitrev() {
    bitrev_select();

    uint8_t input = 0x67; // 01100111
    uint8_t output = bitrev_transfer(input);
    printf("=========bitrev test:  Input: 0x%x, Output: 0x%x==========\n", input, output);

    bitrev_deselect();
}

void flash_select() {
    SPI_SS = (1 << 0) & 0xFF; // 选中flash
}

void flash_deselect() {
    SPI_SS = 0x00; // 取消选中flash
}

uint32_t flash_read(uint32_t addr) {
    flash_select();

    // 拼接，03h + addr的低24位，作为TX
    uint32_t flash_cmd = (0x03 << 24) | (addr & 0xFFFFFF);
    
    // 启动传输
    SPI_TX1 = flash_cmd;
    SPI_TX0 = 0;
    SPI_CTRL |= (1 << 8);

    while(SPI_CTRL & (1 << 8)); // 等待完成

    uint32_t data = SPI_RX0;

    //printf("Read data: 0x%x from address: 0x%x\n", data, addr);

    flash_deselect();
    return data;
}

void flash_test() {
    // 从0x30000000读到0x3000 + 100
    for (uint32_t i = 0; i < 100; i++) {
        uint32_t addr = 0x30000000 + i * 4;
        uint32_t data = flash_read(addr);
        printf("Flash Read: Address: 0x%x, Data: 0x%x\n", addr, data);
    }
}