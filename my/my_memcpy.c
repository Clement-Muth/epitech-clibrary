/*
** EPITECH PROJECT, 2020
** library
** File description:
** my_memcpy
*/

#include "include/my.h"

void *
my_memcpy(void *restrict dest, const void *restrict src, size_t len)
{
    char *cdest = dest;
    const char *csrc = src;

    while (len--)
        *cdest++ = *csrc++;
    return (dest);
}