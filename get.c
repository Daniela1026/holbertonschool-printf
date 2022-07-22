#include "main.h"

/**
 *formt -  function
 *@c: char
 *Return: 0
 */

int (*formt(char c))(va_list)
{
	charact_t ch[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
	};

	int i = 0;

	while (i < 3)
	{
		if (c == ch[i].charact[0])
		{
			return (ch[i].c);
		}
		i++;
	}

	return (NULL);
}
