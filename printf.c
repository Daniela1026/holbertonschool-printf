#include <stdarg.h>
#include <stddef.h>
#include "main.h"

/**
* frm - format is a character string
* @charact: Character char
* Return: 0
*/

/**int (*frm(const char *charact, int x)(va_list)  */
int (*frm(const char *charact, int x))(va_list)
{
	int l = 0;
	
	charact_t ch[] = {
		{"c", pr_char}, {"s", pr_str}, {"%", pr_percent}
	};

/**	while (l < 3)
	{
		if (charact == (ch[l].c))
		{
			return (ch[l].c);
		}
		l++;
	}
	return (NULL); */
	for (l = 0; ch[l].chara[0] != NULL; l++)
	{
		if (ch[l].chara[0] == charact[x])
		{
			return(ch[l].c);
		}
	}
	return(NULL);
}

/**
* _printf - format is a character string
* @format: Character char
* Return: 0
*/

/** int _printf(const char *format, ...)
{
	va_list list;
	int n = 0, a = 0;
	int (*i)();

	va_start(list, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);

	while (format[n])
	{
		if (format[n] == '%' && format[n + 1] != '%')
		{
			i = frm(format[n + 1]);
			if (i == NULL)
			{
				_putchar(format[n]);
				a++;
				n++;
			}
			else
			{
				a += i(list);
				n += 2;
				continue;
			}
		}
		else
		{
			_putchar(format[n]);
			a++;
			n++;
		}
	}
	va_end(list);
	return (a);
}*/