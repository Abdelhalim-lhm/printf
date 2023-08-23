#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
int (*spe_func(const char *c))(va_list);
int _putchar(char);
int _printf(const char * const format, ...);
int print_string(va_list);
int print_char(va_list);
int print_percent(va_list);
int print_int(va_list ls);
int print_rev(va_list);
int print_rota(va_list);
/**
 * struct type - Struct type
 *
 * @type: The type of the conversion
 * @f: The function associated
 */
typedef struct type
{
	char *type;
	int (*f)(va_list);
} type_f;
#endif
