#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct func_match : match the convesrion specifiers with conversions
*
* @spec: specifier
*
* @func: function
*
* @func_match: match function
*/

typedef struct func_match
{
	char *spec;
	int (*func)();
} func_match;
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(char c);
int print_str(char *s);

#endif
