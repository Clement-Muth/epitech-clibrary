/*
** EPITECH PROJECT, 2020
** Oriente_obj
** File description:
** create_node
*/

#include "lib.h"
#undef create_node
#ifndef __createnode
#define __createnode create_node
#endif /*__createnode*/

linked_t *
__createnode(void *restrict __lvalue)
{
    linked_t *__node = malloc(sizeof(linked_t));

    __node->obj = NULL;
    __node->name = (char *)__lvalue;
    return (__node);
}