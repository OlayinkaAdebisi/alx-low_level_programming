#include "main.h"
/**
 * print_square - print square
 * @size: 'is the numbers of times d character should be printed'
 * Return: print_square always
 */
void print_square(int size)
{
	int hash, ash;

	for (hash = 1; hash <= size; hash++)
	{
		_putchar(35);
			for (ash = 1; ash < size; ash++)
			{
				_putchar(35);
			}
		_putchar('\n');
	}
}
