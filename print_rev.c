#include "main.h"
/**
 * print_rev - function that reverse a string
 * @ls :argument list
 * Return: lengjt of the string
 */
int print_rev(va_list ls)
{
	char *str = va_arg(ls, char *);
	int i, len = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (len);
}
