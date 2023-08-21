#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
int _putchar(char);
int _printf(const char * const format, ...);
void print_string(va_list);
void print_char(va_list);
void print_percent(va_list);
/**
 * struct type - Struct type
 *
 * @type: The type of the conversion
 * @f: The function associated
 */
typedef struct type
{
	char *type;
	void (*f)(va_list);
} type_f;
#endif
