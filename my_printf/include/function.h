/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** function
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_

int my_printf(const char *restrict format, ...);

void printf_string(va_list str_print);
void printf_char(va_list str_print);
void printf_int(va_list str_print);
void printf_float(va_list str_print);
void printf_pointer(va_list str_print);
void printf_color(va_list str_print);
void printf_error(va_list str_print);


void *my_memcpy(void *dest, const void *src, size_t len);
void *my_memalloc(size_t size);
char *my_strdup(char *src);
int my_strlen(char *__string);
char *my_itoa(unsigned nb);
char *my_revstr(char *string);
double my_ftoa(const char *str);
int my_intlen(int number);

#endif /* !FUNCTION_H_ */