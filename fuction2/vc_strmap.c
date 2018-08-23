/* ************************************ */
/*                                      */
/* vc_strmap.c                          */
/*                                      */
/* By:Bianca,Javier,EmreA,Marcelo,Natsumi*/
/*                                      */
/* ************************************ */
#include <stdio.h>

char vc_strmap (char const *s, char (*f)(char))
{
    int i;
    char *result;
    i =0;
    if(s == NULL || f == NULL)
    return(NULL);

    result =  vc_memalloc(vc_strlen(s));
    vc_strcpy(result, s);

    while (result[i])
    {
        result[i]=(*f)(result[i]);
        i++;

    }
    return (result);
}


