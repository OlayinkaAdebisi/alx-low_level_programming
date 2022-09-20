#include "main.h"
/**
 * swap_int - swap values of d two integers
 * @a: 'first integer'
 * @b: 'second integer'
 * Return: (swap_int)
 */
void swap_int(int *a, int *b)
{
	int doy;

	doy = *a;
	*a = *b;
	*b= doy;
}
