/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_strcat
*/

#include "include/my.h"

char *
my_strcat(char *restrict dest, const char *restrict src)
{
    char *tmp = my_memalloc(my_strlen(dest) + my_strlen(src) + 1, 0);
    int i = my_strlen(dest);

    tmp = my_strcpy(tmp, dest);
    for (int n = 0; src[n]; ++n)
        tmp[i++] = src[n];
    tmp[i] = '\0';
    return (tmp);
}

// int main(int argc, char *const restrict *const restrict argv)
// {
//     char string[] = "Bonjour";
//     const char string2[] = "Bonjour2";
//     char *res = my_strcat(string, string2);

//     printf("%s\n", res);
//     return (EXIT_SUCCESS);
// }
