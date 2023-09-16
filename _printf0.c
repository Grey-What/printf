#include "main.h"
/**
* _strlen - count the length of string
* @s: string
* Return: length
*/

int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
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
	char temp;
	int count = 0;
	char *temp_s;
	int j = 0;

	va_list arg;
	va_start(arg, format);

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		count++;

		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			}

			case 'c':
				temp = va_arg(arg, char);
				_putchar(temp);
				count++;
				break;
			case 's':
				temp_s = va_arg(arg, char);
				while (temp_s[j] != '\0')
				{
					_putchar(temp_s[j]);
					j++;
					count++;
				}
				break;
			case '%': 
				_putchar('%');
				break;
			}
		}
		i++;
	}return(count);
}
