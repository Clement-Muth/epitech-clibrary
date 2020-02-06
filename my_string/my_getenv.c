/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** my_getenv
*/

#include "include/my_string.h"
#include "../my/include/my.h"

static int my_strncp(const char *compared, const char *comparing, size_t size)
{
    if (size == 0)
        return (0);
    do {
        if (*compared != *comparing++)
            return (*(unsigned char *)compared - *(unsigned char *)--comparing);
        if ((*compared++) == 0)
            break;
    } while (--size != 0);
    return (0);
}

char *my_getenv(char *name, char **env)
{
    size_t len = my_strlen(name);
    char **ep = env;

    if (env == NULL || name[0] == '\0') return NULL;
    len -= 2;
    name += 2;
    for (ep = env; *ep != NULL; ++ep)
        if (!my_strncp(*ep + 2, name, len) && (*ep)[len + 2] == '=')
            return &(*ep)[len + 3];
    return (NULL);
}