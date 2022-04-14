#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: how long line would be
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		_putchar(92);
		if (n > 1)
		{
			for (i = 0; i < (n - 1); i++)
			{
				_putchar(10);
				
				while (i  < (n - 1))
				{
					_putchar(32);
					i++;
				}

				_putchar(92);
			}
		}
	}
	_putchar(10);
}
