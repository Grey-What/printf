#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct func_match - match the convesrion specifiers with conversions
*
* @spec: specifier
*
* @func: function
*
* Description: Match the specifier with the string with the relevant function
*
*/

typedef struct get_func
{
	char *spec;
	int (*func)();
} get_func;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);

#endif
