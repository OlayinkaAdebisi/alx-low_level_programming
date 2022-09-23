#include "main.h"
/**
 * _strncat - string cat
 * @dest: string to be concate...
 * @src: string to be concate...
 * @n: integer
 * Return: (_strncat)
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	/*should end with a end null char*/
	dest[len + i] = '\0';

	return (dest);
}
