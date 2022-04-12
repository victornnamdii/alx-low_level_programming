#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: the value of times table
 */
void print_times_table(int n)
{
	int a = 0, j, k;

	if (n  < 15 && n >= 0)
	{
		for (a = 0; a < (n + 1); a++)
		{
			for (j = 0; j < (n + 1); j++)
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
				else if (k < 100)
				{
					_putchar(32);
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else
				{
					_putchar(k / 100 + '0');
					_putchar((k / 10) % 10 + '0');
					_putchar(k % 10 + '0');
				}
				if (j < n)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}
}
