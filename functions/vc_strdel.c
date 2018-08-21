/* ************************************ */
/*                                      */
/* vc_strdel.c                          */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

void vc_strdel(char **as)
{
    if (as)
    {
        free(*as);
        *as = NULL;
    }
}
