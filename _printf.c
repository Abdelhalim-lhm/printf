#include "main.h"
/**
 * _printf - printf copy function
 * @format: the type of conversion
 * Return: lenght of the input
 */
int _printf(const char * const format, ...)
{
	va_list ls;
	int i = 0, count = 0;

	va_start(ls, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			const char *specifier = &format[i + 1];
			int (*get_spe)(va_list) = spe_func(specifier);

			if (get_spe)
			{
				count += get_spe(ls);
				i += 2;
				continue;
			}
		}
	_putchar(format[i]);
	i++;
	count++;
	}
	va_end(ls);
	return (count);
}
