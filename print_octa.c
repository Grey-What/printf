#include "main.h"
/**
* print_oct - convert a decimal number into octal.
*
* arg: arguement unsigned int.
*
* Return: number of characters printed
*/
int print_oct(va_list arg)
{
	unsigned int extract;
	int i = 0, x, len;
	char  binum[35], temp;

	extract = va_arg(arg, unsigned int);

	if (extract == 0)
	{
		_putchar('0');
		return (1);
	}
	while (extract > 0)
	{
		binum[i++] = (extract % 8) + '0';
		extract = extract / 8;
	}
	binum[i] = '\0';
	len = _strlen(binum);

	for (x = 0; x < len / 2; x++)
	{
		temp = binum[x];
		binum[x] = binum[len - x - 1];
		binum[len - x - 1] = temp;
	}
	for (x = 0; binum[x] != '\0'; x++)
	{
		_putchar(binum[x]);
	}
	return (x);
}
