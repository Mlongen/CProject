/**
 * 
 * vc_putnbr.c
 * written by Natsumi
 * 
 */

#include <stdio.h>
#include <unistd.h>

void vc_putnbr(int n)
{
    write(1, &n, sizeof(n));
}