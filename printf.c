#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
* frm - format is a character string
* @charact: Character char
* @x: Character int
* Return: 0
*/

int (*frm(const char *charact, int x))(va_list)
{
	int l = 0;

	charact_t ch[] = {
		{"c", pr_char}, {"s", pr_str}, {"%", pr_percent}
	};

	for (l = 0; ch[l].chara != NULL; l++)
	{
		if (ch[l].chara[0] == charact[x])
		{
			return (ch[l].c);
		}
	}
	return (NULL);
}

/**
* _printf - format is a character string
* @format: Character char
* Return: 0
*/

int _printf(const char *format, ...)
{
	va_list list;
	int n = 0, a = 0;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (format[n])
	{
		if (format[n] == '%')
		{
			if (format[n + 1] == '%')
			{
				_putchar('%');
				a++;
				n++;
			}
			else if (frm(format, n + 1) != NULL)
			{
				a += (frm(format, n + 1))(list);
				n++;
			}
			else
			{
				_putchar(format[n]);
				a++;
			}
		}
		else
		{
			_putchar(format[n]);
			n++;
		}
	}
	va_end(list);
	return (a);
}
