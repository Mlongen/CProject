/* ************************************ */
/*                                      */
/* vc_isdigit.c                         */
/*                                      */
/* By: Marcelo                          */
/*                                      */
/* ************************************ */

int vc_isdigit(char *str)
{
  int i;

  i = 0;
  while (str[i])
    if (!(str[i] >= '0' && str[i] <= '9'))
      return 0;
  return 1;
}
