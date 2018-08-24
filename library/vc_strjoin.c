/* ************************************ */
/*                                      */
/* vc_strjoin.c                         */
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

char *vc_strjoin(const char *s1, const char *s2)
{
    int i;
    int j;
    int size1;
    int size2;
    char *result;

    size1 = vc_strlen(s1);
    size2 = vc_strlen(s2);
    int totalSize;
    totalSize = size1 + size2;
    if (!(result = (char *)malloc(sizeof(char) * (totalSize + 1))))
        return NULL;
    for (i = 0; i < size1; i++)
        result[i] = s1[i];
    for (j = 0; j < size2; j++)
        result[i++] = s2[j];
    result[i] = '\0';
    return result;
}