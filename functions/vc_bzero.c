/* ************************************ */
/*                                      */
/* vc_bzero.c                           */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */
#include <string.h>

void vc_bzero(void *s, size_t n)
{
    size_t i;
    char *ch;
    i = 0;
    ch = (char *)s;
    while (i < n)
    {
        *ch = '\0';
        ch++;
        i++;
    }
}
