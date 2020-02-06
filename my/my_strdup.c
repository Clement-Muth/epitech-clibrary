/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_strdup
*/

#include "include/my.h"

char *
my_strdup(const char *restrict src)
{
    void *new = malloc((size_t)my_strlen(src) + 1);

    assert(src != NULL);
    return (char *)my_memcpy(new, src, (size_t)my_strlen(src) + 1);
}