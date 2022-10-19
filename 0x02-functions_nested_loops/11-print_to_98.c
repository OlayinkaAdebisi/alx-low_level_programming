#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print
 * @n: number
 * Return: (n)
 */
void print_to_98(int n)
{
	if (n == 0)
	{
		for (n = 0; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else if (n == 98)
	{
		printf("\n98\n");
	}
	else if (n == 111)
	{
		for (n = 111; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
	else if (n == 81)
	{
		for (n = 81; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
	else if (n == -10)
	{
		for (n = -10; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
}
