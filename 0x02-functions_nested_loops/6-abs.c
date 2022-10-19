#include "main.h"
/**
 * _abs - absolute value
 * @r: number to be absoluted lol
 * Return: (r)
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = ((-1) * r);
		_putchar(r);
	}
	else
		_putchar(r);
	return (r);
}
