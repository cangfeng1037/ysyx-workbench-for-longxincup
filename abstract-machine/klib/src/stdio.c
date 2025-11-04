#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static char* itoa(int value, char* str) {
  char *p = str;
  bool neg = false;
  unsigned u;

  if (value < 0) { neg = true; u = (unsigned)(-(long long)value); }  // 避免 INT_MIN 溢出
  else { u = (unsigned)value; }

  char* start = p;
  do {
    *p++ = '0' + (u % 10);
    u /= 10;
  } while (u > 0);

  if (neg) *p++ = '-';
  *p = '\0';

  for (char *i = start, *j = p - 1; i < j; i++, j--) {
    char tmp = *i; *i = *j; *j = tmp;
  }
  return str;
}

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int cnt = 0;

  for (; *fmt; fmt++) {
    if (*fmt != '%') { putch(*fmt); cnt++; continue; }

    fmt++;                      // 跳到转换符
    if (*fmt == '\0') break;    // 末尾单独一个 '%'，直接结束

    bool zero_pad = false;
    int width = 0;
    if (*fmt == '0') {
      zero_pad = true;
      fmt++;
    }
    while (*fmt >= '0' && *fmt <= '9') {
      width = width * 10 + (*fmt - '0');
      fmt++;
    }

    switch (*fmt) {
      case 's': {
        const char *s = va_arg(ap, const char *);
        if (!s) s = "(null)";
        while (*s) { putch(*s++); cnt++; }
        break;
      }
      case 'd': {
        int d = va_arg(ap, int);
        char buf[32];
        itoa(d, buf);

        int len = 0; for (char *p = buf; *p; p++) len++;
        int pad = (width > len) ? (width - len) : 0;

        if (zero_pad && buf[0] == '-') {  // 负号不算在宽度内
          putch('-'); cnt++;
          for (int i = 0; i < pad; i ++ ) { putch('0'); cnt++; }
          for (int i = 1; i < len; i ++ ) { putch(buf[i]); cnt++; }
        } else {
          for (int i = 0; i < pad; i ++ ) { putch(zero_pad ? '0' : ' '); cnt++;}
          for (int i = 0; i < len; i ++ ) { putch(buf[i]); cnt++;}
        }
        
        break;
      }
      case 'c': {
        char c = (char)va_arg(ap, int);
        putch(c); cnt++;
        break;
      }
      case 'l': {
        fmt++;  // 处理 'l' 后的转换符
        if (*fmt == 'd') {
          long d = va_arg(ap, long);
          char buf[32];
          itoa((int)d, buf);  // 简化处理为 int

          int len = 0; for (char *p = buf; *p; p++) len++;
          int pad = (width > len) ? (width - len) : 0;

          if (zero_pad && buf[0] == '-') {  // 负号不算在宽度内
            putch('-'); cnt++;
            for (int i = 0; i < pad; i ++ ) { putch('0'); cnt++; }
            for (int i = 1; i < len; i ++ ) { putch(buf[i]); cnt++; }
          } else {
            for (int i = 0; i < pad; i ++ ) { putch(zero_pad ? '0' : ' '); cnt++;}
            for (int i = 0; i < len; i ++ ) { putch(buf[i]); cnt++;}
          }

        } else {
          putch('%'); cnt++;
          putch('l'); cnt++;
          putch(*fmt); cnt++;
        }
        break;
      }
      case 'x': {
        unsigned int x = va_arg(ap, unsigned int);
        char buf[32];
        char *p = buf;
        do {
          int digit = x % 16;
          if (digit < 10) *p++ = '0' + digit;
          else *p++ = 'a' + (digit - 10);
          x /= 16;
        } while (x > 0);
        *p = '\0';

        int len = 0; for (char *q = buf; *q; q++) len++;
        int pad = (width > len) ? (width - len) : 0;

        for (int i = 0; i < pad; i ++ ) { putch(zero_pad ? '0' : ' '); cnt++; }
        for (char *q = p - 1; q >= buf; q--) { putch(*q); cnt++; }

        break;
      }
      case '%': {
        putch('%'); cnt++;
        break;
      }
      default: {                 // 未支持的转换符，原样输出
        putch('%'); cnt++;
        putch(*fmt); cnt++;
        break;
      }
    }
  }

  va_end(ap);
  return cnt;
}


int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);

  char *p = out;
  while (*fmt) {
    if (*fmt == '%') {
      fmt ++ ;

      if(*fmt == 's') {
        char *s = va_arg(ap, char *);
        while (*s) *p ++  = *s ++ ; 
      } 
      
      else if (*fmt == 'd') {
        int d = va_arg(ap, int);
        char buf[32]; 
        itoa(d, buf);
        char *q  = buf;
        while (*q) *p ++ = *q ++;
      } 
      
      else {
        *p ++ = '%';
        *p ++ = *fmt;
      }
    } 
    else {
      *p ++ = *fmt;
    } 
    fmt ++ ;
  }

  *p = '\0';
  va_end(ap);
  return p - out;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
