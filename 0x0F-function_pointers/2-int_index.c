#include "function_pointers.h"
#include "stdlib.h"
/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 * Return: the index of first element
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int a))
{
	int i;

	if (array ==  NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
