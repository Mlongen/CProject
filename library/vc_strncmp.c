int vc_strncmp(char *s1, char *s2, unsigned int n)
{
  if (!n)
    return 0;
  while ((*s1 && (*s1 == *s2)) && --n)
  {
    s1++;
    s2++;
  }
  return *(unsigned char *)s1 - *(unsigned char *)s2;
}
