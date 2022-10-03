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
	int i = 1, n;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", n);
	}
	return (0);
}
