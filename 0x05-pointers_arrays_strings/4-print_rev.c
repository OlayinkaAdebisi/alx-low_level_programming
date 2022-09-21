#include "main.h"
/**
 * print_rev - printing string in reverse
 * @s: 'string to be printed in reverse'
 * Return: (str)
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (--i; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
