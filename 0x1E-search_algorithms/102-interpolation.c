#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched for
 * Return: index of found value, else -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	if (!array)
		return (-1);
	for (low = 0, high = size - 1; high >= low;)
	{
		pos = low +
			(((double)(high - low) / (array[high] - array[low])) *
			 (value - array[low]));

		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
	}
	return (-1);
}
