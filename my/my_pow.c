/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_compute_power
*/

#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void affichebin(unsigned n)
{
    char *string = malloc(100);
    unsigned bit = 0 ;
    unsigned mask = 1 ;

    for (int i = 0 ; i < 32 ; ++i) {
        bit = (n & mask) >> i ;
        string[i] = bit + 48;
        mask <<= 1 ;
    }
    printf("%s\n", strrev(string));
}

int main(int ac, char const * const *av)
{
    affichebin(2);
}