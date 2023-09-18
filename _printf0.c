#include "main.h"
/**
 * print_num - function conversts a number to a string and prints it
 *
 * @num: number to print
 *
 * @count: counter
 *
 * Return: nothing
 */
void print_num(int nums, int *count)
{
	int temp_num;
	temp_num = nums;

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
	
	get_func func_matchi[] =
	{
		{'c', print_char}, {'s', print_str},{NULL, NULL}
	};


	if (format == NULL || format[0] == '%' && format[1] == '\0')
		return (-1);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			int j ;

			for (j = 0; func_match[j].spec != NULL; j++)
			{
				if(func_match[j].spec == format[i])
				{
					count += func_match[j].func(arg);
				}
			}
		}
		else
		{
			count += _putchar(format[i]);
			
		}
	}
	va_end(arg);
	return (count);
}
