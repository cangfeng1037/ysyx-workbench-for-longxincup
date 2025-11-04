#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {

  uint32_t data = inl(VGACTL_ADDR);
  uint16_t width = data >> 16;
  uint16_t height = data & 0xffff;
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width,
    .height = height,
    .vmemsz = width * height * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  AM_GPU_CONFIG_T cfg;
  ioe_read(AM_GPU_CONFIG, &cfg);
  uint16_t width = cfg.width;
  uint16_t height = cfg.height; 
  
  // 空绘制：只处理同步
  if (ctl->w == 0 || ctl->h == 0) {
    if (ctl->sync) outl(SYNC_ADDR, 1);
    return;
  }

  // 获取帧缓冲区的起始地址
  uint32_t *fb = (uint32_t *)(uintptr_t) FB_ADDR;
  const uint32_t *pixels = (const uint32_t *)ctl->pixels;

  // 按行拷贝到显存
  // 初始位置 (ctl->x, ctl->y)，拷贝区域大小 (ctl->w, ctl->h)
  for (int i = 0; i < ctl->h; i ++ ) {
    if (ctl->y + i >= height) break; 
    for (int j = 0; j < ctl->w; j ++ ) {
      if (ctl->x + j >= width) break; 
      fb[(ctl->y + i) * width + (ctl->x + j)] = pixels[i * ctl->w + j];
    }
  }
  
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
