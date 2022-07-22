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

/**
* print_decimal - Print decimal
* @dcm: character int
* Return: 0
*/

int print_decimal(va_list dcm)
{
	int i = va_arg(dcm, int);
	int n, l;
	int a = 1, r = 1;
	int s = i % 10;

	i = i / 10;
	n = i;

	if (s < 0)
	{
		_putchar('-');
		n = -n;
		i = -i;
		s = -s;
		r++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			a = a * 10;
			n = n / 10;
		}
		n = i;
		while (a > 0)
		{
			l = n / a;
			_putchar(l + '0');
			n = n - (l * a);
			a = a / 10;
			r++;
		}
	}
	_putchar(s + '0');

	return (r);
}

/**
* print_integral - Print integral
* @itg: character int
* Return: 0
*/

int print_integral(va_list itg)
{
	int i = va_arg(itg, int);
	int n, l;
	int a = 1, r = 1;
	int s = i % 10;

	i = i / 10;
	n = i;
	if (s < 0)
	{
		_putchar('-');
		n = -n;
		i = -i;
		s = -s;
		r++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			a = a * 10;
			n = n / 10;
		}
		n = i;
		while (a > 0)
		{
			l = n / a;
			_putchar(l + '0');
			n = n - (l * a);
			a = a / 10;
			r++;
		}
	}
	_putchar(s + '0');

	return (r);
}

