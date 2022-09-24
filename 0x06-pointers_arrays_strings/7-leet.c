#include "main.h"
/**
 * leet - encode
 * @s: array
 * Return: (s)
 */
char *leet(char *s)
{
	int i, c  = 0;
	char s1[] = {97, 101, 111, 116, 108};
	char m1[] = {65, 69, 79, 84, 76};
	char s2[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == s1[i] || s[c] == m1[i])
			{
				s[c] = s2[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
