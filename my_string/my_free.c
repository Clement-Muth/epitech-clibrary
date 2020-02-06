/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_free
*/

#include "include/my_string.h"
#include "../my/include/my.h"

static void check_format(char flag, va_list list)
{
    char **array;
    char *string;

    if (flag == 't') {
        array = va_arg(list, char **);
        for (int i = 0; array[i]; ++i)
            free(array[i]);
        free(array);
    }
    if (flag == 's') {
        string = va_arg(list, char *);
        free(string);
    }
}

int my_free(char *restrict format, ...)
{
    va_list(list);
    va_start(list, format);

    for (int i = 0; format[i]; ++i) {
        if (format[i] == '%')
            check_format(format[i + 1], list);
    }
    va_end(list);
    return (EXIT_SUCCESS);
}