#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>



int pr_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return(1);
}


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


int pr_percent(va_list list)
{
	(void)list;
	return (write(1, "%", 1));
}
