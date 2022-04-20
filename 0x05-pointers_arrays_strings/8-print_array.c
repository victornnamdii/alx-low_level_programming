#include "main.h"
#include <stdio.h>
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
		printf("%d", a[i]);

		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
