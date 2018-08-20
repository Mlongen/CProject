/**
 * File              : vc_strncpy.c
 * Author            : Derrick Park
 * Date              : Wed  8 Aug 22:33:12 2018
 * Last Modified Date: Wed  8 Aug 22:33:12 2018
 * Last Modified By  : Derrick Park
 */

char *vc_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  i = 0;
  while ((i < n) && src[i])
  {
    dest[i] = src[i];
    i++;
  }
  while (i < n)
    dest[i++] = '\0';
  return 0;
}
