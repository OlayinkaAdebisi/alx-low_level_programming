#include "main.h"
/**
 * print_alphabet_x10 - print x10
 * Return: (void)
 */
void print_alphabet_x10(void)
{
	char i;
	int c;

	for (c = 0; c <= 9; c++)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
