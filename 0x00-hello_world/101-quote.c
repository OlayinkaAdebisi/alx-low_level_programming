#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char dd[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, dd, 59);

	return (1);
}
