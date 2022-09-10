#include <stdio.h>
/**
 * main - Entry point
 * Descripition: 'single digit'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

while (digit <= 8)
	{
		putchar(digit + '0');
		digit++;
		putchar(',');
		putchar(' ');
       	}
	putchar('9'+'\n');
	return (0);
}
