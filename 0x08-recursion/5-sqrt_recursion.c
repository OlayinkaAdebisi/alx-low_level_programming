#include "main.h"
/**
 * _sqrt_recursion - square root
 * @n: integer
 * Return: (n)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
		return (_sqrt_recursion(n));
}
