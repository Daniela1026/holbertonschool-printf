#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_binary - check code
 * @list: value
 * Return: l
 */

int print_binary(va_list list)
{
	unsigned int n, b[1024];
	int i, l = 0;
	char s;

	n = va_arg(list, int);
	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		b[l] = n % 2;
		n /= 2;
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		s = b[i] + '0';
		write(1, &s, 1);
	}
	return (l);
}

/**
 * print_unsigned - check code
 * @list: value
 * Return: j
 */

int print_unsigned(va_list list)
{
	int j = 1;
	unsigned int n = va_arg(list, unsigned int);
	unsigned int t;
	int l = n % 10, d, e = 1;

	n = n / 10;
	t = n;

	if (l < 0)
	{
		_putchar('-');
		t = -t;
		n = -n;
		l = -l;
		j++;
	}
	if (t > 0)
	{
		while (t / 10 != 0)
		{
			e = e * 10;
			t = t / 10;
		}
		t = n;
		while (e > 0)
		{
			d = t / e;
			_putchar(d + '0');
			t = t - (d * e);
			e = e / 10;
			j++;
		}
	}
	_putchar(l + '0');
	return (j);
}

/**
 * print_octal - check code
 * @list: value
 * Return: c
 */

int print_octal(va_list list)
{
	int *v;
	int j, c;
	unsigned int n = va_arg(list, unsigned int);
	unsigned int t = n;

	c = 0;

	while (n / 8 != 0)
	{
		n /= 8;
		c++;
	}
	c++;
	v = malloc(c * sizeof(int));
	for (j = 0; j < c; j++)
	{
		v[j] = t % 8;
		t /= 8;
	}
	for (j = c - 1; j >= 0; j--)
	{
		_putchar(v[j] + '0');
	}
	free(v);
	return (c);
}


/**
 * print_hexadecimal - check code
 * @list: value
 * Return: l
 */

int print_hexadecimal(va_list list)
{
	unsigned int n, b[1024];
	int i = 0, l = 0;
	char s;

	n = va_arg(list, int);
	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		b[l] = n % 16;
		n /= 16;
		if (b[l] > 9)
		{
			b[i] = b[l] + 39;
		}
		else
		{
			b[i] = b[l];
		}
		i++;
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		s = b[i] + '0';
		write(1, &s, 1);
	}
	return (l);
}

/**
 * print_hexadecimalX - check code
 * @list: value
 * Return: c
 */

int print_hexadecimalX(va_list list)
{
	int *v;
	int j, c;
	unsigned int n = va_arg(list, unsigned int);
	unsigned int t = n;

	c = 0;

	while (n / 16 != 0)
	{
		n /= 16;
		c++;
	}
	c++;
	v = malloc(c * sizeof(int));
	for (j = 0; j < c; j++)
	{
		v[j] = t % 16;
		t /= 16;
	}
	for (j = c - 1; j >= 0; j--)
	{
		if (v[j] > 9)
		{
			v[j] = v[j] + 7;
		}
		_putchar(v[j] + '0');
	}
	free(v);
	return (c);
}
