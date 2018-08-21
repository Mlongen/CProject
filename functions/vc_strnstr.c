/* ************************************ */
/*                                      */
/* vc_strnstr.c                         */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strnstr(const char *str, const char *to_find, size_t len)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if (!to_find[0])
        return &str[i];
    char *s2len;
    int s2length;
    s2length = 0;
    s2len = to_find;
    while (s2len[s2length++])
        ;
    while (str[i] && (i + s2length) <= len + 1)
    {
        while ((str[i + j] == to_find[j]) && to_find[j])
            j++;
        if (!to_find[j])
            return &(str[i]);
        j = 0;
        i++;
    }
    return NULL;
}