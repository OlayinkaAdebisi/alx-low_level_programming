#include "main.h"
/**
 * _memcpy - copies  n bytes from memory area src to memory area dest
 * @dest:  string o be copied to
 * @src: string with data
 * Return: (_memcpy);
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = *dest;
	return (dest);	
}
