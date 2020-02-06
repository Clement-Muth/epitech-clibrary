/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_envcpy
*/

#include "include/my_string.h"
#include "../my/include/my.h"

static inline int my_count_word(char **restrict arr)
{
    int i = 0;

    for (i = 0; arr[i]; ++i);
    return (i);
}

char **my_envcpy(char **restrict env)
{
    char **arr = my_memalloc(sizeof(char *) * (my_count_word(env) + 1), true);
    unsigned int i = 0;

    for (i = 0; env[i]; i++)
        arr[i] = my_strd((char *)env[i]);
    arr[i] = NULL;
    return (arr);
}