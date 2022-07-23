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
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hexadecimal},
		{"X", print_hexadecimalX}
	};

	int i = 0;

	while (i < 10)
	{
		if (c == ch[i].charact[0])
		{
			return (ch[i].c);
		}
		i++;
	}

	return (NULL);
}
