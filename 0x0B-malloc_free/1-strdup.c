#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 */
char *_strdup(char *str)
{
	unsigned int m = 0,n;
	char *c;

	str = malloc(sizeof(char) * n);
		
	for (n = 0; n < m ; n++)
		str[n] = c[n];
	m++;
	if (str == NULL)
		return (NULL);
	return (str);
}
