/* ************************************ */
/*                                      */
/* vc_strnew.c                          */
/*                                      */
/* By: Bianca                           */
/*                                      */
/* ************************************ */
#include <string.h>
#include <stdlib.h>
char *vc_strnew(size_t size)
{
    size_t i;
    char *ptr_block;
    char *str;

    i = 0;
    while (i < size)
    {
        ptr_block = malloc(sizeof(char) * size);
        if (ptr_block == NULL)
        {
            return NULL;
        }
        else
        {
            *ptr_block = '\0';
            i++;
        }
    }
    str = ptr_block;
    return str;
}
