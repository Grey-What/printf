#include "main.h"
/**
* print_unsign - print a unsigned int
*
* @arg: arguement for integer
*
* Return: unsigned
*
*/
int print_unsign(va_list arg)
{
	unsigned int num = 0, len = 0, i = 0, j, digit;
	char temp, s[35];

	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		while (num != 0)
		{
			digit = num % 10;
			s[i] = digit + '0';
			num  = num / 10;
			i++;
		}
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
