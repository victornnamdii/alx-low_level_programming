#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int a = 0, j;
	
	while (a < 10)
	{
		j = 0;
		_putchar(48);
		_putchar(44);
		_putchar(32);
		_putchar(32);

		while (j < 10)
		{
			_putchar((a + j) + '0');

			if (j < 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			j++;
		}
		a++;
	}
}
