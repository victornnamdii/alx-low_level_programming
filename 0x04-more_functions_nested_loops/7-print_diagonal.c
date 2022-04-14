#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: how long line would be
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		_putchar(92);
		if (n > 1)
		{
			for (i = 1; i < n; i++)
			{
				_putchar(10);
				j = i;

				while (j != 0)
				{
					_putchar(32);
					j--;
				}
				_putchar(92);
			}
		}
	}
	_putchar(10);
}
