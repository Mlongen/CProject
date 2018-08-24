/* ************************************ */
/*                                      */
/* vc_strsub.c                          */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

#include <string.h>
#include <stdlib.h>
static int vc_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

char *vc_strsub(char const *s, size_t start, size_t len)
{
    char *result;
    int i;
    if (!(result = (char *)malloc(sizeof(char) * len + 1)))
        return NULL;
    int j;
    j = 0;
    for (i = start; i < (start + len); i++)
        result[j++] = s[i];

    result[j] = '\0';
    return result;
}