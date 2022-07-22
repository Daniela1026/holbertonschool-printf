#include "main.h"

/**
 *_printf - function that produces output according to a format
 *@format: character string
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int (*c)(va_list);
	int n = 0;
	int a = 0;

	va_list list;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	va_start(list, format);

	while (format[n])
	{
		if (format[n] == '%')
		{
			if (format[n + 1] != '\0')
			{
				c = formt(format[n + 1]);
			}
			if (c == NULL)
			{
				_putchar(format[n]);
				a++;
				n++;
			}
			else
			{
				a += c(list);
				n += 2;
				continue;
			}
		}
		_putchar(format[n]);
		a++;
		n++;
	}
	va_end(list);
	return (a);
}
