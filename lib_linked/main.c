/*
** EPITECH PROJECT, 2020
** Oriente_obj
** File description:
** main
*/

#include "linked/include/lib.h"

int main(int ac, char *restrict *restrict av)
{
    linked_t *list = NULL;

    add_list(&list, av);
    print_list(list);
    return (EXIT_SUCCESS);
}