#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicate a string
 * @str: string to be duplicated
 * Return: NULL if str == NULL
 */
char *_strdup(char *str)
{
	unsigned int m = 0, n = 0;
	char *c = 0;

	if (str == NULL)
		return (NULL);
	/*calculae the sizeof pointer str*/
	while (str[n] != 0)
		n++;
	/*allocate memory of sizeof char for the code*/
	c = (char *) malloc(sizeof(char) * (n + 1));
	if (c == NULL)
		return (NULL);
	while (str[m] != '\0')
	{
		c[m] = str[m];
		m++;
	}
	return (c);
}
