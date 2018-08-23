/* ************************************ */
/*                                      */
/* vc_strmap.c                          */
/*                                      */
/* By:Javier                            */
/*                                      */
/* ************************************ */
#include <string.h>

static char *vc_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

static int vc_strlen(char *str)
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

char vc_strmap(char const *s, char (*f)(char))
{
    int i;
    char *result;
    i = 0;
    if (s == NULL || f == NULL)
        return NULL;

    result = vc_memalloc(vc_strlen(s));
    vc_strcpy(result, s);

    while (result[i])
    {
        result[i] = (*f)(result[i]);
        i++;
    }
    return (result);
}
