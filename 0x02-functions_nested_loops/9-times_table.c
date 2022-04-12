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

			_putchar(k + '0');

			if (j < 8)
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
