#include <stdio.h>
/**
 * main - Entry point
 * Descripition: 'single digit'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;
while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
		putchar(',');
		putchar(' ');
       	}
	putchar('\n');
	return (0);
}
