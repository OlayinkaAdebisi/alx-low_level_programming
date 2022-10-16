#include "main.h"
/**
 * print_last_digit - last digit
 * @i: number
 * Return: (m)
 */
int print_last_digit(int i)
{
	int m;

	if (i < 0)
	{
		m = (-1 * (i % 10));
	}
	else
		m = (i % 10);
	_putchar(m + '0');
	return (m);
}
