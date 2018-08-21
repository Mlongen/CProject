/* ************************************ */
/*                                      */
/* vc_strclr.c                          */
/*                                      */
/* By: Bianca                           */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_strclr(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        s[i] = '\0';
        i++;
    }
}
