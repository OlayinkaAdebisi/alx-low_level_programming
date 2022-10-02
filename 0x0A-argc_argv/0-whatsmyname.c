#include <stdio.h>
#include <stdlib.h>
/**
 * main - advances
 * @argc: counts numbers of argu on cmd line
 * @argv: array of argc
 * Return: (main) 
 */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
	return (0);
}
