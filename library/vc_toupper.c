/* ************************************ */
/*                                      */
/* vc_toupper.c                         */
/*                                      */
/* By: Javier                         */
/*                                      */
/* ************************************ */

int vc_toupper(int c)
{
    if (('a' < 'c') && ('c' <= 'z'))
        c = c - 32;
    return c;
}
