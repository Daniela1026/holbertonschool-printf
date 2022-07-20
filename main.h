#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
/**int (*frm(const char charact))(va_list);*/
int (*frm(const char *charact))(va_list);
int pr_char(va_list list);
int pr_str(va_list list);
int pr_percent(va_list list);

/**
* struct charact - format output
* @charact: Character char
* @c: Character c
* Return: 0
*/

/** Codigo Daniela
 * typedef struct charact
{
	char *charact;
	int (*c)(va_list);
} charact_t;*/

typedef struct chara
{
	char *chara;
	int (*c)(va_list);
}charact_t;

#endif
