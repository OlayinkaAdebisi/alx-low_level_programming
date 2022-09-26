#include "main.h"
/**
 * print_sign - print sign
 * @n: char
 * Return: (print_sign)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(11 + ' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(16 + ' ');
			return (0);
	}
	else
		_putchar(13 + ' ');
			return (-1);
}
