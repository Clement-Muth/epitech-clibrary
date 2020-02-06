/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_abs
*/

#include "include/my.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

int
my_abs(int nbr)
{
    #if __BYTE_ORDER == __LITTLE_ENDIAN
    int y = (nbr >> 31);
    #else
    int y = (nbr << 31);
    #endif

    return ((nbr ^ y) - y);
}


int main(int ac, char const * const *av)
{
    struct t t;

    printf("%d\n", sizeof(t));
    return (0);
}