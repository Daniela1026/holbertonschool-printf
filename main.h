#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
* struct charact - Structur characters
* @charact: pointer
* @c: function
*/

typedef struct charact
{
	char *charact;
	int (*c)(va_list);
} charact_t;

int _putchar(char c);
int valist(char *str);
int _printf(const char *format, ...);
int print_number(va_list list);
int (*formt(char c))(va_list);
int print_char(va_list ch);
int print_str(va_list st);
int print_percent(va_list pct);
int print_decimal(va_list dcm);
int print_integral(va_list itg);
int print_binary(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int print_hexadecimal(va_list list);
int print_hexadecimalX(va_list list);

#endif
