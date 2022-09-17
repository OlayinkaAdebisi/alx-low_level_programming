#include "main.h"
/**
 * print_line - lol
 * @n: 'numbers of lines'
 * Return: Always 0
 */
void print_line(int n)
{
	int m;
	char l = '_';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
			_putchar(l);
		_putchar('\n');
	}
}
