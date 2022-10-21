#include <stdarg.h>
/**
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, m = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		m += va_arg(ap, int);
	va_end(ap);
	return (m);
}
