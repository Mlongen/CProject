/* ************************************ */
/*                                      */
/* vc_strtrim.c                         */
/*                                      */
/* By:Javier                            */
/*                                      */
/* ************************************ */

#include <string.h>

static char *vc_strdup(char *src)
{
    char *dst;
    int i;

    i = 0;
    while (src[i])
        i++;
    if (!(dst = (char *)malloc(sizeof(char) * (i + 1))))
        return NULL;
    i = -1;
    while (src[++i])
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}
s static int vc_strlen(char *str)
{
    int i;

    i = 0;
    while (*str++ != '\0')
        i++;
    return i;
}

static void *vc_memalloc(size_t size)
{
    int i;
    int *ptr_block;

    i = 0;
    while (i < size)
    {
        ptr_block = malloc(sizeof(int));
        if (ptr_block == NULL)
        {
            return NULL;
        }
        else
        {
            *ptr_block = 0;
            i++;
        }
    }
}

static void *vc_memcpy(void *s1, const void *s2, size_t n)
{
    long *ptr1;
    long *ptr2;
    char *cptr1;
    char *cptr2;

    ptr1 = (long *)s1;
    ptr2 = (long *)s2;
    while (n >= sizeof(long))
    {
        *ptr1 = *ptr2;
        ++ptr1;
        ++ptr2;
        n -= sizeof(long);
    }
    cptr1 = (char *)ptr1;
    cptr2 = (char *)ptr2;
    while (n > 0)
    {
        *cptr1++ = *cptr2++;
        --n;
    }
    return (s1);
}

char *vc_strtrim(char const *s)
{
    int i[2];
    char *result;
    if (s == NULL)
        return (NULL);
    i[0] = 0;
    result = vc_memalloc(vc_strlen(s));
    vc_memcpy(result, s, vc_strlen(s));
    while (result[i[0]] && (result[i[0]] == ' ' || result[i[0]] == '\n' || result[i[0]] == '\t'))
    {
        i[0]++;
    }
    i[1] = vc_strlen(s) - 1;
    while (i[1] > 0)
    {
        if (result[i[1]] == ' ' ||
            result[i[1]] == '\n' || result[i[1]] == '\t')
            i[1];
        else
        {
            result[i[1] + 1] = '\0';
            break;
        }
    }
    return (vc_strdup(&result[i[0]]));
}
