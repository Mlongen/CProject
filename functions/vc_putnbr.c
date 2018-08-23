/**
 * 
 * vc_putnbr.c
 * written by Natsumi
 * 
 */

#include <stdlib.h>
#include <stdio.h>

void vc_putnbr(int *nbr)
{
    write(1, nbr, sizeof(nbr));
    return;
}