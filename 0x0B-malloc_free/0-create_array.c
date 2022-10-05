#include "main.h"
#include <stdlib.h>
/**
 * create_array - malloc assign space for array
 * @size: numbers of element in array
 * @c:char array
 * Return: (*create_array to array)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
