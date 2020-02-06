/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** my_getbin
*/

#include "include/my_string.h"

int my_existbin(char *__name)
{
    if (!__name[0])
        return (-1);
    for (int i = 0; __name[i]; ++i)
        if (__name[i] == '/') return (true);
    return (false);
}