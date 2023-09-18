#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
/**    printf("Unknown:[%r]\n");*/

    _printf("-----------------------\n\n");

      _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
/*    printf("This is a normal %\n");*/
    _printf("This is a normal %\n");

    printf("a number: %i\n", -3106);
    _printf("a number: %i\n", -3106);
    printf("another number: %d\n", 8943);
    _printf("another number: %d\n", 8943);

/**    printf("Binary: %b\n", 85);
    _printf("Binary: %b\n", 85);

    printf("Unsigned: %u\n", 1992);
    _printf("Unsigned: %u\n", 1992);

    printf("Octal: %o\n", 88);
    _printf("Octal: %o\n", 88);
*/
    return (0);
}
