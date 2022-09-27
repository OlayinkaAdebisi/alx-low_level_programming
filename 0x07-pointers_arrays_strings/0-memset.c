#include "main.h"
/**
 * _memset - fills memory with a constant data byte
 * @s:  data memory
 * @b: constant data byte
 * @n: memory size
 * Return: (_memset)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n ; m++)
		s[m] = b;
	return (s);
}
