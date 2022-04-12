#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int a = 0, j, k;
	
	while (a < 10)
	{
		j = 0;

		while (j < 10)
		{
			k = a * j;
			
			if (k <= 9)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar(k / 10);
				_putchar(k % 10);
			}

			if (j < 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			j++;
		}
		_putchar('\n');
		a++;
	}
}
