#include "main.h"
/**
 * _pow_recursion - power of x raised to y
 * @x: 1st int
 * @y: 2nd int
 * Return: (_pow_recursion)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		int even = _pow_recursion(x, y / 2);
			return (even * even);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
