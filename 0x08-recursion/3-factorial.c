#include "main.h"
/**
 * factorial - factorial of numbers
 * @n: number to be factorialized
 * Return: (n)
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
