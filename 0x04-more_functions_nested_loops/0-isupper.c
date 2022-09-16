#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 66 && c <= 122)
		return (1);
	else
		return (0);
}
