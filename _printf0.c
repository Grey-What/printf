#include "main.h"
/**
* _printf - function produces a string according to format.
* 
* @format: string with 0 or more directives.
* 
* Return: Number of characters outputted.
*/
int _printf(const char *format, ...)
{
	int i = 0;

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			}
			case 'c':
				break;
			case 's':
				break;
			case '%': 
				_putchar('%');
				break;
			}
		}
		i++;
	}
