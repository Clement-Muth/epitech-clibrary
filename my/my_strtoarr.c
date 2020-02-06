/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_str_to_word_array
*/

#include "include/my.h"

static inline int my_strlenlim(const char *restrict string, const char lim,
int begin)
{
    for (; string[begin] && string[begin] != lim; ++begin);
    return (begin);
}

static inline int my_nbrline(const char *restrict string)
{
    int i = 0;
    int c = 0;

    for (i = 0; string[i]; i++)
        if (string[i] == ' ')
            c++;
    return (c + 1);
}

static char *parsing(char *string)
{
    char *tmp = my_memalloc(my_strlen(string) + 1, false);

    for (int i = 0; string[i]; i++)
        if (string[i] == '\t' || string[i] == '\b' || string[i] == '\n')
            string[i] = ' ';
    for (int i = 0, e = 0; string[i]; i++) {
        if (!(string[i] == ' ' && string[i + 1] == ' ')) {
            tmp[e] = string[i];
            ++e;
        }
    }
    return (tmp);
}

char **my_strtoarr(const char *restrict string)
{
    char **arr;
    int begin = 0;
    int n = 0;

    assert(string != NULL);
    string = parsing((char *)string);
    arr = my_memalloc(sizeof(char *) * (my_nbrline(string) + 1), true);
    for (int i = 0; string[i]; i++, n++) {
        begin = my_strlenlim(string, ' ', begin);
        arr[n] = my_memalloc(begin + 1, false);
        for (int e = 0; string[i] != ' ' && string[i]; ++i, ++e)
            arr[n][e] = string[i];
        if (!string[i])
            break;
        if (string[begin] == ' ')
            begin++;
    }
    arr[n + 1] = NULL;
    return (arr);
}