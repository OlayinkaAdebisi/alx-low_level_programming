#include <stdio.h>
/**
 * main - Entry point
 * Descripition: 'Printing of numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0;  num < 10; )
	{
		printf("%d", num);
		num++;
	}
		putchar('\n');
	return (0);
}
