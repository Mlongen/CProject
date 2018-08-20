#include <stdio.h>

void vc_putstr(char *str)
{
  while (*str != '\0')
    putchar(*str++);
}
