/* ************************************ */
/*                                      */
/* vc_itoa.c                            */
/*                                      */
/* By:Javier                            */
/*                                      */
/* ************************************ */
#include <string.h>
#include <stdlib.h>

int len(long nb)
{
    int len;
    len = 0;
    if (nb < 0)
    {
        nb = nb * -1;
        len++;
    }
    while (nb > 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}
char *vc_itoa(int n)
{
    char *str;
    long nb;
    int i;
    nb = n;
    i = len(nb);
    if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
        return NULL;
    str[i--] = '\0';
    if (nb == 0)
    {
        str[0] = '-';
        return (str);
    }
    if (nb < 0)
    {
        str[0] = '-';
        nb = nb * -1;
    }
    while (nb > 0)
    {
        str[i] = 48 + (nb % 10);
        nb = nb / 10;
        i--;
    }
    return (str);
}
