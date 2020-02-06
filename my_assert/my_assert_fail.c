/*
** EPITECH PROJECT, 2020
** library
** File description:
** my_assert_fail
*/

#include "include/my_assert.h"

void
my_assert_fail(const char *restrict assertion, const char *restrict file,
    unsigned line, const char *restrict function)
{
    #ifdef DNBDEBUG
        my_printf("%s: %s:%d: %s '%s' failed\n", file, function, line,
            "Assertion", assertion);
        abort();
    #else
        my_printf("An error occured - Please try again\nAbandon\n");
    #endif
}