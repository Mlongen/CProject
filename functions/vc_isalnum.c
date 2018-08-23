/* ************************************ */
/*                                      */
/* vc_isalnum.c                         */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

static int vc_isalpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
            return 0;
        i++;
    }
    return 1;
}
static int vc_isdigit(char *str)
{
    int i;

    i = 0;
    while (str[i])
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;
    return 1;
}

int vc_isalnum(int n)
{
    if (vc_isalpha(n))
        return (1);
    if (vc_isdigit(n))
        return (1);
    return (0);
}