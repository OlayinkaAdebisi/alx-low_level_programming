#include "main.h"
/**
 *
 *
 */
void times_table(void)
{
	int i,j;

	for (i = 0;i< 9;i++)
	{
		for (j = 0;j < 9;j++)
		{
			int a = (i) * (j);
			if (a == 0)
				_putchar('0');
		}
	}
}
