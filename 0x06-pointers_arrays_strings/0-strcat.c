#include "main.h"
/**
 * strcat - string cat
 * @dest: string
 * @src: string2
 * Return: (_strccat)
 */
char *_strcat(char *dest, char *src)
{
	int k,l;
	
	/* counting numbers of characters in dest */ 
	k = 0;
	while (dest[k] != '\0')
		k++;
	/* concatenate dest and src */
	for (l = 0; src[l] != '\0'; l++)
		dest[k++] = src[l];	
	return 0;
}
