#include "main.h"

/**
 *print_char - print a char
 *@ch: char
 *Return: value of _putchar
 */

int print_char(va_list ch)
{
	return (_putchar(va_arg(ch, int)));
}

/**
 *print_str - print a string
 *@st: string
 *Return: i the nbr of char print
 */

int print_str(va_list st)
{
	return (valist(va_arg(st, char *)));
}

/**
 *print_percent - print the char %
 *@pct: char
 *Return: char % -> 1
 */

int print_percent(va_list pct __attribute__((unused)))
{
	return (_putchar('%'));
}

