/* ************************************ */
/*                                      */
/* vc_strdel.c                          */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

#include <string.h>
#include <stdlib.h>

void vc_strdel(char **as)
{
    if (as && *as)
    {
        free(*as);
        *as = NULL;
    }
}
