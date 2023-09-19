#include "main.h"
/**
* print_hex - convert a decimal to hexadecimal.
*
* arg: arguement decimal number.
*
* Return: number of characters
*/
int print_hex(va_list arg)
{
	unsigned int extract, mod;
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
		mod = extract % 16;
		if (mod < 10)
		{
			binum[i++] = (extract % 16) + '0';
		}
		else
			binum[i++] = (extract % 16) + 97;
		
		extract = extract / 16;
		
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
