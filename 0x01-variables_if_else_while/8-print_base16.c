#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int hex = 0;
char dec = 'a';
	while (hex < 10)
	{
		putchar(hex + '0');
		hex++;
	}
	while (dec <= 'f')
	{
		putchar(dec);
		dec++;
	}
	putchar('\n');
	return (0);
}
