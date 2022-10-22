#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: (void)
 */
void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)/*length of string*/
		;
	if (i % 2 == 0)/*for even numbers*/
	{
		for (n = (i / 2); str[n] != '\0'; n++)
			_putchar(str[n]);
	}
	else /*for odd numbers*/
		for (n = ((i - 1) / 2) + 1; str[n] != '\0'; n++)
			_putchar(str[n]);
	_putchar('\n');
}
