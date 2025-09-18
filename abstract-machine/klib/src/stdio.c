#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static char* itoa(int value, char* str) { // 将数字转化为字符串输出
  char *p = str;
  bool neg = false;

  if (value < 0) {
    neg = true;
    value = -value;
  }

  char* start = p;
  do {
    *p ++ = '0' + (value % 10);
    value /= 10;
  } while(value > 0);

  if (neg) *p ++ = '-';

  *p = '\0';

  for (char *i = start, *j = p - 1; i < j; i ++ , j -- ) {
    char tmp = *i; *i = *j; *j = tmp;
  }

  return str;
}

int printf(const char *fmt, ...) {
  panic("Not implemented");
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
