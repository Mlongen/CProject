
#include <stdio.h>
int vc_toupper(int c)
{
    if (('a'<'c') && ('c'<='z'))
    c = c - 32;
    return(c);
}
