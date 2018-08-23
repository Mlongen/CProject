/* ************************************ */
/*                                      */
/* vc_memset.c                          */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

#include <string.h>

void *vc_memset(void *b, int c, size_t len)
{
    unsigned char *ch;
    ch = b;
    while (len > 0)
    {
        *ch = (unsigned char)c;
        ch++;
        len--;
    }
}