/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** is_alphanum
*/

#include "include/my.h"

bool
my_isalpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? true : false);
}