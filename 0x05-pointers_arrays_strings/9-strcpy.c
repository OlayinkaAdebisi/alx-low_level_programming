#include "main.h"
/**
 * _strcpy - copies src to dest
 * @dest: string to be copied to
 * @src: string to be copied
 * Return: (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)/*calc. length of src*/
		dest[i] = src[i];/*copies src to dest*/
	dest[i] = '\0';/*adds NULL  terminator*/
	return (dest);
}
