#include <stdio.h>
#include <stdlib.h>
/**
 * main - index
 * @argc: counts
 * @argv: array
 * Return: (Success)
 */
int main(int argc, char *argv[])
{
	int i, n;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", n);
}
