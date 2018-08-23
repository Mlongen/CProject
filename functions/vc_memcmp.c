/* ************************************ */
/*                                      */
/* vc_memcmp.c                          */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

#include <string.h>

int vc_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    unsigned char *str1;
    unsigned char *str2;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    if (n == 0)
        return 0;
    while (i++ < n)
    {
        if (str1[i] > str2[i])
        {
            return (str1 + i) - (str2 + i);
        }
        else if (str1[i] < str2[i])
            return (str2 + i) - (str1 + i);
    }
    return 0;
}