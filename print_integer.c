#include "main.h"
/**
* print_int - print a integer
*
* @arg: arguement for integer
*
* Return: integer
*
*/
int print_int(va_list arg)
{
	int num = 0, len = 0, i = 0, j, is_negative = 0, digit;
	char temp, s[35];

	num = va_arg(arg, int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		if (num < 0)
		{
			is_negative = 1;
			num = num * -1;
		}
		while (num != 0)
		{
			digit = num % 10;
			s[i] = digit + '0';
			num  = num / 10;
			i++;
		}
		if (is_negative == 1)
			s[i++] = '-';
		s[i] = '\0';
		len =  _strlen(s);
		for (j = 0; j < len / 2; j++)
		{
			temp = s[j];
			s[j] = s[len - j - 1];
			s[len - j - 1] = temp;
		}
		for (j = 0; s[j] != '\0'; j++)
			_putchar(s[j]);
		return (len);
	}

}
