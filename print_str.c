#include "main.h"
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
                return (0);

        for (i = 0; s[i] != '\0'; i++)
        {
                _putchar(s[i]);
        }

        return (i);
}
