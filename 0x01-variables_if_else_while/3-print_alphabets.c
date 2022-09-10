#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha = 'a';
char don = 'A';
while (alpha <= 'z')
{
putchar(alpha);
	alpha++;
}
while (don <= 'Z')
{
putchar(don);
	don++;
}
putchar('\n');

return (0);
}
