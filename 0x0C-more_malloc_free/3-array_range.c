#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: the pointer to the newly created array,
 * if min > max, NULL,
 * if malloc fails, NULL
 */
int *array_range(int min, int max)
{
	int i, j;
	int *k;

	if (min > max)
		return (NULL);
	k = malloc((max - min + 1) * sizeof(int));
	if (k == NULL)
		return (NULL);
	for (i = min, j = 0; j < (max - min + 1); i++, j++)
		*(k + j) = i;
	return (k);
}
