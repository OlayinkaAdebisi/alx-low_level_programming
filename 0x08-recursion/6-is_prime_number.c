#include "main.h"
/**
 * is_prime_number - mmggdjn
 * @n: innfhhf
 * Rturn: (is_prime_number)
 */
int is_prime_number(int n)
{
	if (n == 1 ||n == 0)
	{
		return (0);
	}
	else if (n % 2 == 0 && n % 3 == 0)
	{
		return (0);
	}
	else 
		return (is_prime_number(n));
}
