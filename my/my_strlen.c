/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_strlen
*/

#include "include/my.h"

int
my_strlen(const char *restrict string)
{
    int i;

    assert(string != NULL);
    for (i = 0; string[i]; ++i);
    return (i);
}