#include "main.h"

/**
* formt - Function Characters
* @c: char
* Return: 0
*/

int (*formt(char c))(va_list)
{
	charact_t ch[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_integral},
	};

	int i = 0;

	while (i < 5)
	{
		if (c == ch[i].charact[0])
		{
			return (ch[i].c);
		}
		i++;
	}

	return (NULL);
}
