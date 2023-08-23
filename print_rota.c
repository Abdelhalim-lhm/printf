#include "main.h"
/**
 * print_rota - function that rota13 a string
 * @ls : list to get argument
 * Return: lenght of the string
 */
int print_rota(va_list ls)
{
	char *str = va_arg(ls, char *);
	int i, j, len = 0, found = 0;
	char *alpha = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *rota = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[len])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			found = 0;
			if (str[i] == alpha[j])
			{
				_putchar(rota[j]);
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			_putchar(str[i]);
		}
	}
	return (len);
}
