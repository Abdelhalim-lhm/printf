#include "main.h"
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
 * Return: the lenght of the string
 */
int print_string(va_list ls)
{
	char *str = va_arg(ls, char *);
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * print_char - function that print a charater
 * @ls: variadic list
 * Return: 1 the char c
 */
int print_char(va_list ls)
{
	return (_putchar(va_arg(ls, int)));
}
/**
 * print_percent - function that print %
 * @ls: variadic list
 * Return: 1 the percent
 */
int print_percent(va_list ls)
{
	(void)ls;
	return (_putchar('%'));
}
/**
 * print_int - function that prints an integer
 * @ls: variadic list
 * Return: number of characters printed
 */
int print_int(va_list ls)
{
	int num = va_arg(ls, int);
	int count = 0;
	int divisor = 1;

	if (num == 0)
	{
		count++;
		_putchar('0');
	}
	else
	{
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}


		while (num / divisor > 0)
		{
			divisor *= 10;
		}

		divisor /= 10;

		while (divisor > 0)
		{
			int digit = num / divisor;

			_putchar('0' + digit);
			num -= digit * divisor;
			divisor /= 10;
			count++;
		}
	}

	return (count);
}
