#include "main.h"
/**
 *
 *
 *
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
	else 
		return (_pow_recursion(x, y));
}
