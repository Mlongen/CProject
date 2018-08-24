/* ************************************ */
/*                                      */
/* vc_memmove.c                         */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

#include <string.h>

void *vc_memmove(void *dst, const void *src, size_t n)
{

    size_t i;
    char *sc;
    char *dt;
    i = 0;
    sc = (char *)src;
    dt = (char *)dst;
    while (i < n)
    {
        sc[i] = dt[i];
        i++;
    }
}