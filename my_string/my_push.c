/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_push
*/

#include "include/my_string.h"
#include "../my/include/my.h"

static inline int my_count_word(char **restrict arr)
{
    int i = 0;

    for (i = 0; arr[i]; ++i);
    return (i);
}

static int count(char *restrict*tab)
{
    int i = 0;

    for (i = 0; tab[i]; ++i);
    return (i);
}

static int check_exist(const char *restrict *restrict arr,
const char *restrict string)
{
    size_t len = my_strlen(string);

    for (int i = 0; arr[i]; ++i)
        if (my_strncmp(arr[i], string, len) && arr[i][len] == '=') {
            arr[i] = my_strcat((char *)string, "=");
            return (i);
        }
    return (-1);
}

char **my_push(char *restrict arr[], const char *restrict var, const char *
restrict value)
{
    char **tmp = my_memalloc((sizeof(char *) * count(arr)) +
    (sizeof(char *) * 2), true);
    int i = 0;
    int pos = 0;

    for (i = 0; arr[i]; ++i)
        tmp[i] = my_strd(arr[i]);
    if ((pos = check_exist((const char **)arr, var)) != -1) {
        if (value) {
            tmp[pos] = my_strd(my_strcat((char *)var, my_strcat("=", value)));
            tmp[i] = NULL;
            return (tmp);
        }
        free(tmp);
        return ((char **)arr);
    }
    tmp[i] = (!value) ? my_strd(my_strcat((char *)var, "=")) : my_strd(
    my_strcat((char *)var, my_strcat("=", value)));
    tmp[i + 1] = NULL;
    return (tmp);
}