#include "main.h"
/**
 * _puts_recursion - puts function
 * @s: string to be printed
 * Return: (s)
 */
void _puts_recursion(char *s)
{
	while (*s != 0)
	{
	_putchar(*s);
	s++;
	}
	_putchar('\n');
}
