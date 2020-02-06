/*
** EPITECH PROJECT, 2020
** Oriente_obj
** File description:
** linked
*/

#ifndef LINKED_H_
#define LINKED_H_

#include "lib.h"

#undef my_strlen
#ifndef __strlen
#define __strlen my_strlen
#endif /*__strlen*/

/* Return the length of string. */
__extern_always_inline __nonnull(())
size_t __strlen(char *const restrict __string)
{
    size_t __count = 0;

    for (__count = 0; __string[__count]; ++__count);
    return (__count);
}

/* Reverse content of a linked-list */
linked_t *reverse_list(linked_t *restrict __llist)
            __nonnull(());

#undef print_list
#ifndef __printlist
#define __printlist print_list
#endif /*__printlist*/

/* Print content of a linked-list */
__extern_always_inline __nonnull(())
void __printlist(linked_t *restrict __llist)
{
    do {
        write(1, __llist->name, my_strlen(__llist->name));
        write(1, "\n", 1);
    } while ((__llist = __llist->next));
}

/* Create a node */
linked_t *create_node(void *restrict __lvalue)
            __THROW __attribute_pure__ __nonnull(());

/* Append new node onto list */
void add_list(linked_t **list, char *restrict *restrict av)
            __THROW __nonnull(());

#endif /* !LINKED_H_ */