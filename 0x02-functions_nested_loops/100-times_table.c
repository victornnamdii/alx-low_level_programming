#include "main.h"
/**
 * times_table - prints 9 times table
 */
void print_times_table(int n)
{
	int a = 0, j, k;

	while (a < (n + 1))
	{
		j = 0;

		while (j < (n +1))
		{
			k = a * j;

			if (k <= 9 && j != 0)
			{
				_putchar(32);
				_putchar(32);
				_putchar(k + '0');
			}
			else if (j == 0)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar(32);
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');

			}
			if (j < n)
			{
				_putchar(44);
				_putchar(32);
			}
			j++;
		}
		_putchar('\n');
		a++;
	}
}
