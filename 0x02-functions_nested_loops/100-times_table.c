#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: the value of times table
 */
void print_times_table(int n)
{
	int a = 0, j, k;

	if (n  < 15 && n > 0)
	{
		while (a < (n + 1))
			{
				j = 0;

				while (j < (n + 1))
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
					else if (k > 99)
					{
						_putchar(k / 100);
						_putchar((k / 10) % 10);
						_putchar(k % 10);
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
}
