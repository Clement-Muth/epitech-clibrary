/*
** EPITECH PROJECT, 2020
** library
** File description:
** my_assert
*/

#ifndef MY_ASSERT_H_
#define MY_ASSERT_H_

////////////////////////////////////////////////////////////
/// Header
///
////////////////////////////////////////////////////////////
#include <stdlib.h>
#include "../../my_printf/include/my_printf.h"

#if defined __cplusplus && __GNUC_PREREQ(2,95)
# define __VOID_CAST static_cast<void>
#else
# define __VOID_CAST (void)(0)
#endif

#define DNBDEBUG 1

#define my_assert(expr) ((expr) ? __VOID_CAST : my_assert_fail(#expr, __FILE__,\
    __LINE__, __func__))

////////////////////////////////////////////////////////////
/// \brief Evalue the expr and abort if it's true
///
/// \return void
////////////////////////////////////////////////////////////
extern void my_assert_fail(const char *assertion, const char *file,
            unsigned line, const char *function)
            __THROW __attribute__ ((__noreturn__));

#endif /* !MY_ASSERT_H_ */