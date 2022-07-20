#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>

/**
* charact - format output
* Return: 0
*/

typedef struct charact
{
        char *charact;
        int (*c)(va_list);
} charact_t;


int _putchar(char c);
int _printf(const char *format, ...);

int charr(va_list list);
int str(va_list list);

#endif
