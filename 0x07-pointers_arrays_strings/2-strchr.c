#include "main.h"
/**
 * _strchr - ...
 * @s: string
 * @c: nnnin
 * Return: (NULL)
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s != '\0')
		return (s);
	return ('\0');
}
