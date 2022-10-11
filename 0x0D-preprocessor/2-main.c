#include <stdio.h>
#include <stdlib.h>
/**
 * main - macro
 * Description: macro
 * Return: (0)
 */
int main(void)
{
	#ifndef FILE
	#define FILE __FILE__
	printf("%s\n", FILE);
	#endif
return (0);

}
