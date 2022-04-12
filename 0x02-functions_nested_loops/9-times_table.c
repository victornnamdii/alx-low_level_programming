#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int a = 0, j, m, k;
	
	while (a < 10)
	{
		j = 0;
		m = 0;

		_putchar(48);
		_putchar(44);
		_putchar(32);
		_putchar(32);

		while (m < 9)
		{
			k = a + j;

			_putchar(k + '0');

			if (m < 8)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			k++;
			m++;
		}
		_putchar('\n');
		j++;
		a++;
	}
}
