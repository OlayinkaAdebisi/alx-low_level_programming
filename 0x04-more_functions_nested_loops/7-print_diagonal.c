#include "main.h"
/**
 * print_diagonal - prints diagonally
 * @n: 'numbers of line'
 * Return: diagonal_lines
 */
void print_diagonal(int n)
{
	int dia;
	int dad;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dia = 1; dia <= n; dia++)
		{
			for (dad = 1; dad <= dia; dad++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
