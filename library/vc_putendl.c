/* ************************************ */
/*                                      */
/* vc_putendl.c                         */
/*                                      */
/*By: Marcelo                           */
/*                                      */
/* ************************************ */

#include <string.h>
#include <unistd.h>

static void vc_putchar(char c)
{
    write(1, &c, 1);
}

static void vc_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        putchar(str[i++]);
}

void vc_putendl(char const *s)
{
    if (s)
    {
        vc_putstr(s);
        vc_putchar('\n');
    }
}
