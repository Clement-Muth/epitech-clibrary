/*
** EPITECH PROJECT, 2020
** Oriente_obj
** File description:
** add_list
*/

#include "lib.h"
#undef add_list
#ifndef __addlist
#define __addlist add_list
#endif /*__addlist*/

void
__addlist(linked_t **__llist, char *restrict *restrict __av)
{
    linked_t *__node;

    __node = create_node(*__av);
    __node->next = *__llist;
    *__llist = __node;
    if (*++__av) return (__addlist(__llist, __av));
    *__llist = reverse_list(*__llist);
}