#include "main.h"
/**
* print_rev - print a string in reverse
*
* @arg: arguement string
*
* Return: Number of characters printed
*
*/
int print_rev(va_list arg)
{
	char *s;
	int i;
	int len = 0;

	s = va_arg(arg, char*);
	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (len);
}
