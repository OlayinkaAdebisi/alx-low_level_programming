#include "main.h"
/**
 * print_most_numbers - Entry point
 * print_most_numbers: 'print_most_numbers'
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)

		if (num != 2 && num != 4)
			{
			_putchar(num + '0');
			}
	_putchar('\n');
}
