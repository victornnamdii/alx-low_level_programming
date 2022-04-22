#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: int type pointer
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int k, j, l = 0;

	n--;
	j = n / 2;
	while (n >= j)
	{
		k = a[l];
		a[l] = a[n];
		a[n] = k;
		n--;
		l++;
	}
}
