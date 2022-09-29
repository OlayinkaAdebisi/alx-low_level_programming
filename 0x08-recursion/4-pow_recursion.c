#include "main.h"
/**
 *
 *
 *
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
		return (_pow_recursion(x, y));
	else 
		return (-1);
}
