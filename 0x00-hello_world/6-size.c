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

	printf("Size of a char: %zu bytes\n", sizeof(age));
	printf("Size of a int: %zu bytes\n", sizeof(aged));
	printf("Size of a long int: %zu bytes\n", sizeof(ages));
	printf("Size of a long long int: %zu bytes\n", sizeof(ag));
	printf("Size of a float: %zu bytes\n", sizeof(agem));

	return (0);
}
