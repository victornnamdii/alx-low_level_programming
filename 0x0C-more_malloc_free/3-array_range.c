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
	int i;
	int *k;

	if (min > max)
		return (NULL);
	k = malloc(max - min + 1);
	if (k == NULL)
		return (NULL);
	for (i = min; i < (max +  1); k++, i++)
		*k = i;
	return (k);
}
