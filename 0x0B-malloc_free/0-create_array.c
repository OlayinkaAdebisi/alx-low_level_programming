#include "main.h"
#include <stdlib.h>
/**
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return(NULL);
	}
	else if (ar == NULL)
	{
		return (NULL);
	}
	while (size++)
			ar[size] = c;
	return (ar);
}
