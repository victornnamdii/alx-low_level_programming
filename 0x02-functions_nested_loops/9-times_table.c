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

		while (j < 9)
		{
			_putchar(j + '0');

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
