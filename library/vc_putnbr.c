/**
 * 
 * vc_putnbr.c
 * written by Natsumi
 * 
 */

#include <string.h>
#include <unistd.h>

void vc_putnbr(int n)
{
    write(1, &n, sizeof(n));
}