/* ************************************ */
/*                                      */
/* vc_strdel.c                          */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

#include <string.h>

void vc_strdel(char **as)
{
    if (as)
    {
        free(*as);
        *as = NULL;
    }
}
