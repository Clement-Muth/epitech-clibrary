/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_del
*/

#include "include/my_string.h"
#include "../my/include/my.h"

char *my_strdp(char *src)
{
    size_t len = my_strlen(src) + 2;
    void *new = my_memalloc(len, false);
    char *cdest = new;
    const char *csrc = src;

    cdest = my_strcpy(cdest, csrc);
    return ((char *)new);
}

static int count(char *restrict*tab)
{
    int i = 0;

    for (i = 0; tab[i]; ++i);
    return (i);
}

char **my_delete(char *restrict *restrict arr, const int line)
{
    char **tmp = my_memalloc((sizeof(char *) * count(arr)) +
    (sizeof(char *) * 2), true);
    int i = 0;
    int n = 0;

    for (i = 0; arr[i]; i++) {
        if (i == line)
            continue;
        tmp[n] = my_strdp(arr[i]);
        ++n;
    }
    tmp[n] = NULL;
    return (tmp);
}