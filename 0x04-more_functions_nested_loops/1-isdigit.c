#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check code for digits
 * @c : Returns 1 if c is a digit
 * Return 0 otherwise
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
