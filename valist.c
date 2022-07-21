#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
* pr_char - prints
* @list: Character va_list
* Return: 0
*/

int pr_char(va_list list)
{
	/**char c;

	c = va_arg(list, int);

	if (c == '\0')
	{
		return (write(1, &c, 1));
	}
	_putchar(c);
	return (1);*/
	char var = (char) va_arg(list, int);
	_putchar(var);
	return (1);
}

/**
* pr_str - prints
* @list: Character va_list
* Return: 0
*/

int pr_str(va_list list)
{
	int i;
	char *s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
* pr_percent - prints
* @list: Character va_list
* Return: 0
*/

int pr_percent(va_list, list)
{
	(void)list;
	return (write(1, "%", 1);
}
