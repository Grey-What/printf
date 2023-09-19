#include "main.h"
/**
* _printf - function produces a string according to format.
* @format: string with 0 or more directives.
* Return: Number of characters outputted.
*/
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	va_list arg;

	get_func func_match[] = { {'c', print_char}, {'s', print_str},
				  {'i', print_int}, {'d', print_int},
				  {'b', print_bin}, {'u', print_unsign},
				  {'o', print_oct}, {'x', print_hex},
				  {'X', print_Hex},
				  {'0', NULL} };
	va_start(arg, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == '%')
			{
				count += _putchar('%');
			}
			else
			{
				for (j = 0; func_match[j].spec != '0'; j++)
				{
					if (func_match[j].spec == format[i])
					{
						count += func_match[j].func(arg);
						break;
					}
				}
				if (func_match[j].spec == '0')
					count += _putchar(format[i]);
			}

		}
		else
			count += _putchar(format[i]);
	}
	va_end(arg);
	return (count);
}
