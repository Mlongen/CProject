/* ************************************ */
/*                                      */
/* vc_strchr.c                          */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

#include <stdio.h>
char *vc_strchr(const char *s, int c)
{
    int i;
    i = 0;

    while (s[i++])
    {
        if (s[i] == c)
        {
            return (char *)s + i;
        }
    }
    return NULL;
}