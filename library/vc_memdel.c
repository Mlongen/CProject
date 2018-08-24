/* ************************************ */
/*                                      */
/* vc_memdel.c                          */
/*                                      */
/* By: Bianca                           */
/*                                      */
/* ************************************ */
#include <string.h>
#include <stdlib.h>
void vc_memdel(void **ap)
{
    if (ap)
    {
        free(*ap);
        *ap = NULL;
    }
}