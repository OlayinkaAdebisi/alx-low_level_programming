#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array a
 * @a: array to be printed
 * @n: numbers element in the array
 * Return: (void)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)/*counts less than n*/
	{
	if (i < (n - 1))/*to eliminate 5th elemen in array*/
		printf("%d, ", a[i]);
	else
		printf("%d", a[i]);
	}
printf("\n");
}
