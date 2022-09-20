#include "main.h"
#include <string.h>
/**
 * _strlen - numbers of string
 * @s: 'pointer'
 * Return: (_strlen)
 */
int _strlen(char *s)
{
	int dad;
		for (dad = 0; *s != '\0'; s++)
			dad++;
		return (dad);
}
