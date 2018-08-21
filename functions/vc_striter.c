/* ************************************ */
/*                                      */
/* vc_striter.c                         */
/*                                      */
/* By: Bianca                           */
/*                                      */
/* ************************************ */
#include <stdio.h>

void subst_a(char *x)
{
    *x = 'a';
}

void vc_striter(char *s, void (*f)(char *))
{
    int i;
    char *tr;

    i = 0;
    while (s[i] != '\0')
    {
        tr = &s[i];
        f(tr);
        i++;
    }
}
