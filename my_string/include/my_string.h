/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** my_string
*/

#ifndef MY_STRING_H_
#define MY_STRING_H_

////////////////////////////////////////////////////////////
/// Put a int into a string
///
////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdint.h>
#include <assert.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////
/// \brief 2-Define returned 84 if an error occured
///
////////////////////////////////////////////////////////////
#define EXIT_ERROR 84

#define EXIT_MALLOC 84

////////////////////////////////////////////////////////////
/// \brief Get value of environment variable
///
/// \param name name of variable
///
/// \param env variable environment
///
/// \return Value of variable
////////////////////////////////////////////////////////////
char *my_getenv(char *name, char **env);


////////////////////////////////////////////////////////////
/// \brief Check if an binary file exist
///
/// \param __name command
///
/// \return -1 if an error occured, 0 if bin exist or 1
////////////////////////////////////////////////////////////
int my_existbin(char *__name);


////////////////////////////////////////////////////////////
/// \brief Update environment
///
/// \param __env variable environment
///
/// \param __var variable to modif
///
/// \param __value value of modif
///
/// \return void
////////////////////////////////////////////////////////////
void my_upenv(char **__env, char *__var, char *__value);


////////////////////////////////////////////////////////////
/// \brief Add row in an array
///
/// \param __arr Array
///
/// \param __string row to add
///
/// \return void
////////////////////////////////////////////////////////////
char **my_push(char *restrict arr[], const char *restrict var, const char *
restrict value);


////////////////////////////////////////////////////////////
/// \brief Copy environment in an array
///
/// \param env
///
/// \return array
////////////////////////////////////////////////////////////
char **my_envcpy(char **restrict env);


////////////////////////////////////////////////////////////
/// \brief Copy environment in an array
///
/// \param arr
///
/// \param line to delete
///
/// \return array
////////////////////////////////////////////////////////////
char **my_delete(char *restrict *restrict arr, const int line);

int my_strncmp(const char *restrict compared,
const char *restrict comparing, size_t size);

char *my_strd(char *src);

#endif /* !MY_STRING_H_ */