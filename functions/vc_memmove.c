#include <stdio.h>

void *vc_memmove(void *dst, const void *src, size_t n)
{

    int i;
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