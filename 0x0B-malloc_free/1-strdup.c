#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 */
char *_strdup(char *str)
{
	unsigned int m = 0,n = 0;
	char c = 0;

	str = malloc(sizeof(char) * n);
		
	for (; n < m ; n++)
		str[n] = c;
	str++;
	if (str == NULL)
		return (NULL);
	return (str);
}
