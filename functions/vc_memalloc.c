/* ************************************ */
/*                                      */
/* vc_memalloc.c                        */
/*                                      */
/* By: Bianca                           */
/*                                      */
/* ************************************ */
#include <string.h>

void *vc_memalloc(size_t size)
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