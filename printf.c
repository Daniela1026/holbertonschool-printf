#include <stdio.h>
#include "main.h"

/**
* *create_array -create array of chars
* @size: Character int
* @c: Character char
* Return: 0
*/
int _printf(const char *format, ...)
{
	va_list ch;
	unsigned int i = 0;

	charac_t print[] = {
		{"c", char},
		{"s", str},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(ch, format);
	i = printoperation(format, print, ch);
	va_end(ch);
	return(i);
}
