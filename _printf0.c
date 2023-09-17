#include "main.h"
/**
 * print_num - function conversts a number to a string and prints it
 *
 * @num: number to print
 *
 * Return: nothing
 */
void print_num(int nums, int *count)
{
	int temp_num = nums;

	if (nums < 0)
	{
		_putchar('-');
		(*count)++;
		temp_num = -temp_num;
	}
	if (temp_num / 10 != 0)
	{
		print_num(temp_num / 10, count);
	}
	_putchar((temp_num % 10) + '0');
	(*count)++;
}

/**
 * print_str - prints a string
 *
 * @s: string to print
 *
 * Return: number of charackters printed
 */
int print_str(char *s)
{
	int i;

	if (s == NULL)
		return (-1);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}
/**
 * print_char - prints a character
 *
 * @c: character to print
 *
 * Return: 1
 */
int print_char(char c)
{
	_putchar(c);
	return (1);
}
/**
* _printf - function produces a string according to format.
* @format: string with 0 or more directives.
* Return: Number of characters outputted.
*/
int _printf(const char *format, ...)
{
	int i, temp_num, count = 0;
	char temp, *temp_s;
	va_list arg;

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;

			switch (format[i])
			{
			case 'c':
				temp = va_arg(arg, int);
				count += print_char(temp);
				break;
			case 's':
				temp_s = va_arg(arg, char *);
				count += print_str(temp_s);
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			case 'd':
				temp_num = va_arg(arg, int);
				print_num(temp_num, &count);
				break;
			case 'i':temp_num = va_arg(arg, int);
				print_num(temp_num, &count);
				break;
			default:
				_putchar(format[i]);
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(arg);
	return (count);
}
