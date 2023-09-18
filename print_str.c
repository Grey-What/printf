#include "main.h"
/**
 * print_str - prints a string
 *
 * @s: string to print
 *
 * Return: number of charackters printed
 */
int print_str(va_list arg)
{
	char *s;
        int i, len  = 0;

	s = va_arg(arg, char *);

        if (s == NULL)
                return (0);

        for (i = 0; s[i] != '\0'; i++)
        {
                _putchar(s[i]);
		len++;
        }

        return (len);
}
