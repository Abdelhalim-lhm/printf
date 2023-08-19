#ifndef MAIN_H
#define MAIN_H
#include "printf_header.h"
/**
 * _putchar - putchar copy
 * @c: charater to print
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_string - function that print string
 * @ls: variadic list
 * Return: nothing
 */
void print_string(va_list ls)
{
	char *str = va_arg(ls, char *);
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		str++;
	}
}
/**
 * print_char - function that print a charater
 * @ls: variadic list
 * Return: nothing
 */
void print_char(va_list ls)
{
	_putchar(va_arg(ls, int));
}
/**
 * print_percent - function that print %
 * @ls: variadic list
 * Return: nothing
 */
void print_percent(va_list ls)
{
	(void)ls;
	_putchar('%');
}
/**
 * _printf - printf copy function
 * @format: the type of conversion
 * Return: lenght of the input
 */
int _printf(const char * const format, ...)
{
	type_f frm[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL},
		};
	va_list ls;
	int j, i = 0;

	va_start(ls, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (frm[j].type)
			{
				if (format[i + 1] == frm[j].type[0])
				{
					frm[j].f(ls);
					i++;
					break;
				}
			j++;
			}
			if (j == 3 && (format[i + 1] != 'c' || format[i + 1] != 's'))
			{
				_putchar(format[i]);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
	i++;
	}
	va_end(ls);
	return (i);
}
#endif
