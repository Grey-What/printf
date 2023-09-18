#include "main.h"
/**
* _strlen - string length
*
* @s: string
*
* Return: length of string
*
*/
int _strlen(char *s)
{
	int count = 0;

	while(s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
* print_integer - print a integer
*
* @arg: arguement for integer
*
* Return: integer
*
*/
int print_integer(va_list arg)
{
	int num = 0, len = 0;
	char temp;
	int i = 0;
	int digit;
	char *s;
	
	num = va_arg(arg, int);

	if(num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		while(num != 0)
		{
			if(num < 0)
			{
				s[i] = '-';
				i++;
				num = num * -1;
			}
			digit = num % 10;
			s[i] = digit;
			num  = num / 10;
			i++;

		}
		s[i] = '\0';
		len =  _strlen(s);

		int j;

		for (j = 0; j < len / 2; j++)
		{
			temp = s[j];
			s[j] = s[len - j];
			s[len - j] = temp;
		}
		for(j = 0;s[j] != '\0'; j++)
		{
			_putchar(s[j]);
		}
		return (len);
	}

}
