#include "main.h"
/**
 * print_char - prints a character
 *
 * @arg: arguement character to be printed.
 *
 * Return: 1
 */
int print_char(va_list arg)
{
	char c = (char)va_arg(arg, int);

	_putchar(c);
	return (1);
}
