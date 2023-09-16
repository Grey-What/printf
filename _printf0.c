#include "main.h"
/**
* _printf - function produces a string according to format.
* @format: string with 0 or more directives.
* Return: Number of characters outputted.
*/
int _printf(const char *format, ...)
{
	int i = 0;
	char temp;
	int count = 0;
	char *temp_s;
	int j;
	va_list arg;

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{
			case 'c':
				temp = va_arg(arg, int);
				_putchar(temp);
				count++;
				break;
			case 's':
				temp_s = va_arg(arg, char *);

				for (j = 0; temp_s[j] != '\0'; j++)
				{
					_putchar(temp_s[j]);
					count++;
				}
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			default:
				i++;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
