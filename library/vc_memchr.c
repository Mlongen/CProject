/* ************************************ */
/*                                      */
/* vc_memchr.c                          */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

#include <string.h>

void *vc_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *result;
    i = 0;
    result = (unsigned char *)s;
    if (n <= 0)
        return NULL;
    while (i < n)
    {
        if (result[i] == c)
        {
            return (void *)result + i;
        }
        i++;
    }
    return NULL;
}