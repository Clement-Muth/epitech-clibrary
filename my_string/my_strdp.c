/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_strdp
*/

#include "../my/include/my.h"
#include "include/my_string.h"

char *my_strd(char *src)
{
    size_t len = my_strlen(src) + 2;
    void *new = my_memalloc(len, false);
    char *cdest = new;
    const char *csrc = src;

    cdest = my_strcpy(cdest, csrc);
    return ((char *)new);
}
