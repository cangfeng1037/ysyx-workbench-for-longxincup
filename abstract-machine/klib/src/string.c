#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  const char *p = s;
  while (*p) p ++ ;
  return p - s;
}

char *strcpy(char *dst, const char *src) {
  char *p = dst;
  while ((*p++ = *src++));
  return dst;
}

 // strncpy复制n个字符，不够就补‘\0’
char *strncpy(char *dst, const char *src, size_t n) {
  size_t i;
  for (i = 0; i < n && src[i] != '\0'; i++ ) 
    dst[i] = src[i];

  for(; i < n; i ++ )
    dst[i] = '\0';

  return dst;
}

// 在dst末尾加src
char *strcat(char *dst, const char *src) {
  char *p = dst;
  while (*p) p ++ ;
  while ((*p ++ = *src ++));
  return dst;
}

// 比较两个字符串
int strcmp(const char *s1, const char *s2) {
  while (*s1 && (*s1 == *s2)) {
    s1++;
    s2++;
  }
  return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  if (n == 0) return 0;

  while( -- n && *s1 && (*s1 == *s2)) {
    s1 ++;
    s2 ++;
  }

  return *(unsigned char *)s1 - *(unsigned char *)s2;
}

void *memset(void *s, int c, size_t n) {
  unsigned char *p = s;
  unsigned char value = (unsigned char) c; 
  while (n -- ) {
    *p ++ = value;
  }
  return s;
}

// 将src的前n个字节复制到dst，支持内存重叠
void *memmove(void *dst, const void *src, size_t n) {
  unsigned char *d = dst;
  const unsigned char *s = src;

  if (d < s) {
    while (n -- ) *d ++ = *s ++ ;
  } else if (d > s) {
    d += n;
    s += n;
    while (n -- ) {*(-- d) = *(-- s);}
  }

  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  unsigned char *d = out;
  const unsigned char *s = in;
  while(n -- ) {
    *d ++ = *s ++; 
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *p1 = s1;
  const unsigned char *p2 = s2;

  while (n -- ) {
    if (*p1 != *p2) return *p1 - *p2;
    p1 ++;
    p2 ++;
  }

  return 0;
}

#endif
