/* ************************************ */
/*                                      */
/* vc_putendl.c                         */
/*                                      */
/*By: Javier                            */
/*                                      */
/* ************************************ */

void vc_putendl(char const *s)
{
    vc_putstr(s);
    vc_putchar('\n');
}