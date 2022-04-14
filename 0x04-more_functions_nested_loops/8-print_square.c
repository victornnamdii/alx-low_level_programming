#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = 0;
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar(10);
		}
	}
	else
	_putchar(10);
}
