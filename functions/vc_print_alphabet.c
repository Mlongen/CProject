#include <stdio.h>

void vc_print_alphabet(void) 
{
  char ltr;

  ltr = 'a';
  while (ltr <= 'z')
  {
    putchar(ltr++);
  }
}

