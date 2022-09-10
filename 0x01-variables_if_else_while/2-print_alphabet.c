#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha = 'a';

	while (alpha <= 'z')
	{
		printf("%c", alpha);
		alpha++;
	}
	printf("\n");
	return (0);
}
