/* ************************************ */
/*                                      */
/* vc_bzero.c                           */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_bzero(void *s, size_t n)
{
    int i;
    char *ch;
    i = 0;
    ch = s;
    while (i < n)
    {
        *ch = '\0';
        ch++;
        i++;
    }
}
