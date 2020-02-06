/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** my_upenv
*/

#include "include/my_string.h"
#include "../my/include/my.h"

void my_upenv(char **__env, char *__var, char *__value)
{
    int i = 0;
    int len = my_strlen(__var);

    for (i = 0; __env[i]; ++i)
        if (__env[i][0] == __var[0] && __env[i][1] == __var[1] && __env[i][len]
            == '=')
            break;
    __env[i] = my_strcat(__var, my_strcat("=", __value));
}