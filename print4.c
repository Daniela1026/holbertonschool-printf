#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * printf_R - check code
 * @list: value
 * Return: n
 */
int printf_R(va_list list)
{
	int i, j, n = 0;
	char *s, *t;
	char a[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char r[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	s = va_arg(list, char *);

	for (i = 0; s[i] != '\0'; i++)
    	{
		n++;
    	}
	t = malloc(sizeof(char) * (n + 1));
	if (!t)
	{
		return ('\0');
	}
	i = 0;
	while (i <= n)
	{
		t[i] = s[i];
		i++;
	}
	for (i = 0; t[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (t[i] == a[j])
			{
				m[i] = r[j];
				break;
			}
		}
	}
	for (i = 0; t[i] != '\0'; i++)
	{
		write(1, &t[i], 1);
	}
	free(t);
	return (n);
}
