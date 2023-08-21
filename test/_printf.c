#include "main.h"
/**
 * _printf - printf copy function
 * @format: the type of conversion
 * Return: lenght of the input
 */
int _printf(const char * const format, ...)
{
	type_f frm[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL},
		};
	va_list ls;
	int j, i = 0, count = 0;

	va_start(ls, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
		j = 0;
			while (frm[j].type)
			{
				if (format[i + 1] == frm[j].type[0])
				{
					if (j != 0)
					{
						frm[j].f(ls);
						i++;
						count++;
					}
					else
					{
						frm[j].f(ls);
						i++;
					}
				}
			j++;
			}
			if (j == 0 && (format[i + 1] != 'c' || format[i + 1] != 's'))
			{
				_putchar(format[i]);
				i++;
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
	i++;
	count++;
	}
	va_end(ls);
	return (count);
}
