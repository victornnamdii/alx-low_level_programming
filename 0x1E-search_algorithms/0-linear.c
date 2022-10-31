#include "search_algos.h"

/**
 *  linear_search - searches for a value in an array of
 *  integers using the Linear search algorithm.
 *  @array: a pointer to the first element of the array to search in
 *  @size: size of the array
 *  @value: value to search for
 *  Return: a pointer to the founded value, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
