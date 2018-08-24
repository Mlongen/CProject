#include <string.h>
#include <stdlib.h>

void vc_putstr(char *str)
{
  int i = 0;
  while (str[i] != '\0')
    putchar(str[i++]);
}
