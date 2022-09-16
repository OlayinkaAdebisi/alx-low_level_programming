#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check if c is upper
 * @c: input for alphabet
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 66 && c <= 122)
		return (1);
	else
		return (0);
}
