#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
int (*frm(const char *charact, int x))(va_list);
int pr_char(va_list list);
int pr_str(va_list list);
int pr_percent(va_list list);

/**
* struct chara - format output
* @chara: Character char
* @c: Character c
* Return: 0
*/

typedef struct chara
{
	char *chara;
	int (*c)(va_list);
} charact_t;

#endif
