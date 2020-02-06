/*
** EPITECH PROJECT, 2020
** library
** File description:
** my_strcpy
*/

#include "include/my.h"

char *
my_strcpy(char *restrict dest, const char *restrict src)
{
    return (my_memcpy(dest, src, my_strlen(src) + 1));
}

int main(int ac, char const * const *av)
{
    char *string = NULL;
    // char *test = my_strcpy(test, string);
    int a = 0;
    if (a == 0)
    my_assert(string != NULL);
    return (0);
}