#include "main.h"
/**
 * _isalpha - capial
 * @c: character
 * Return: (c);
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
