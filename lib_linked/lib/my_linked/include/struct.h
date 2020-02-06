/*
** EPITECH PROJECT, 2020
** Oriente_obj
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct list_s
{
    struct list_s *next;
    void *obj;
    char *name;
    int test;
} linked_t;

#endif /* !STRUCT_H_ */