/*
** EPITECH PROJECT, 2020
** Oriente_obj
** File description:
** reverse_list
*/

#include "my_linked.h"
#undef reverse_list
#ifndef __reverselist
#define __reverselist reverse_list
#endif /*__reverselist*/

linked_t *
__reverselist(linked_t *restrict __llist)
{
    linked_t *__new = NULL;

    if (!__llist->next) return (__llist);
    __new = __reverselist(__llist->next);
    __llist->next->next = __llist;
    __llist->next = NULL;
    return (__new);
}