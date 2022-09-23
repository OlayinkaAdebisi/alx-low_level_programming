#include "main.h"
/**
 * _strcmp - copy strings
 * @s1: string1
 * @s2: string2
 *
 * Return: (_strcmp)
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s2[k] != '\0' || s2[k] != '\0'; k++)
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
	}

	return (0);
}
