#include "main.h"

/**
* print_char - Print a char
* @ch: Character char
* Return: 0
*/

int print_char(va_list ch)
{
	return (_putchar(va_arg(ch, int)));
}

/**
* print_str - Print a string
* @st: character string
* Return: 0
*/

int print_str(va_list st)
{
	return (valist(va_arg(st, char *)));
}

/**
* print_percent - Print %
* @pct: character char
* Return: 0
*/

int print_percent(va_list pct __attribute__((unused)))
{
	return (_putchar('%'));
}

