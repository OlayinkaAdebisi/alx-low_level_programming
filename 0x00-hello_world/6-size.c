#include <stdio.h>
/**
 * main - Entry point
 * Description: 'use of sizeof()'
 * Return: Always 0 (Success);
 */
int main(void)
{
	char age;
	int aged;
	long int ages;
	long long int ag;
	float agem;

	printf("Size of a char: %zu byte(s)\n", sizeof(age));
	printf("Size of an int: %zu byte(s)\n", sizeof(aged));
	printf("Size of a long int: %zu byte(s)\n", sizeof(ages));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ag));
	printf("Size of a float: %zu byte(s)\n", sizeof(agem));

	return (0);
}
