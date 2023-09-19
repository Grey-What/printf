#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
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
	char spec;
	int (*func)(va_list);
} get_func;

get_func func_match[10];

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);
int print_bin(va_list arg);
int _strlen(char *s);
int print_unsign(va_list arg);
int print_oct(va_list arg);
int print_hex(va_list arg);
/**int print_Hex(va_list arg);*/
#endif
