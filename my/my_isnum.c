/*
** EPITECH PROJECT, 2020
** 105torus
** File description:
** is_strnum
*/

#include "include/my.h"

bool
my_isnum(const char *restrict string)
{
    int i = 0;

    my_assert(string != NULL);
    for (i = 0; string[i]; i++)
        if (string[i] < '0' || string[i] > '9')
            return (false);
    return (true);
}