#include "main.h"
/**
 * main - test printf
 *
 * Return: 0
 */
int main()
{
	char c = 'H';
	char *s = "Apple";
	char mod = '%';

	_printf("i am testing to print a char: %c", c);
	_printf("I am testing to print a string: %s", s);
	_printf("i am testing to print a %\: %%", mod);

	return (0);
}
