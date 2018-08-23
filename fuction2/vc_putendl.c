/* ************************************ */
/*                                      */
/* vc_putendl.c                         */
/*                                      */
/*By:Bianca,Javier,EmreA,Marcelo,Natsumi*/
/*                                      */
/* ************************************ */

void vc_putendl (char const *str,int fd)
{

    while(*str)

    vc_putendl(*str++,fd);
}













