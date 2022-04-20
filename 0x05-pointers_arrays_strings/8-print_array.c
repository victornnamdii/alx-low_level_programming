#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: int type pointer
 * @n: number of elements of print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);

		if (i < (n - 1))
		{
			_putchar(44);
			_putchar(32);
		}
	}
	printf("\n");
}
