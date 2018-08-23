/* ************************************ */
/*                                      */
/* vc_strchr.c                          */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

#include <string.h>

char *vc_strrchr(const char *s, int c)
{
    int i;
    i = 0;
    while (s[i++])
        ;

    while (i-- > 0)
    {
        if (s[i] == c)
        {
            return (char *)s + i;
        }
    }
    return NULL;
}