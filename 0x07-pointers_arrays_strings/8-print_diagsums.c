#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: char type pointer
 * @size: sizeof matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int dsum = 0;
	int usum = 0;

	for (i = 0; i < size; i++)
		dsum = dsum + a[i][i];
	for (i = (size - 1), j = 0; i >= 0; j++, i--)
		usum = usum + a[i][j];
	printf("%i, %i", dsum, usum);
}
