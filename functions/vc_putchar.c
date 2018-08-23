/* ************************************ */
/*                                      */
/* vc_putchar.c                         */
/*                                      */
/* By: Bianca                           */
/*                                      */
/* ************************************ */
#include <string.h>
#include <unistd.h>

void vc_putchar(char c)
{
    write(1, &c, 1);
}
