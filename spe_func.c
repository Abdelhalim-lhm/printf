#include "main.h"
/**
 * spe_func - summon the function associed to the specifier given
 * @c: the character specifier
 * Return: pointer to the function associeted
 */
int (*spe_func(const char *c))(va_list ls)
{
	int j = 0;
	type_f frm[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{"r", print_rev},
		{NULL, NULL},
		};

	if (c)
	{
		while (frm[j].type)
		{
			if (*c == frm[j].type[0])
			{
				return (frm[j].f);
			}
		j++;
		}
	}
	return (NULL);
}
