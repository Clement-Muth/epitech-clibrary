/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_strncmp
*/

#include "include/my_string.h"

int my_strncmp(const char *restrict compared,
const char *restrict comparing, size_t size)
{
    for (int i = 0; compared[i] && comparing[i] && i < size; i++) {
        if (compared[i] != comparing[i])
            return (false);
    }
    return (true);
}