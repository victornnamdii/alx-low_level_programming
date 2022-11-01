#include "search_algos.h"
/**
 * binary_search2 - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched for
 * @n: exponential value parsed
 * Return: index of value or -1
 */
int binary_search2(int *array, size_t size, int value, size_t n)
{
	size_t i, left, right;

	if (!array)
		return (-1);
	if (n < (size - 1))
		right = n;
	else
		right = size - 1;
	for (left = n / 2; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched for
 * Return: the index of found value, else -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i < size)
		printf("Value found between indexes [%lu] and [%lu]\n", i / 2, i);
	else
		printf("Value found between indexes [%lu] and [%lu]\n", i / 2, size - 1);

	return (binary_search2(array, size, value, i));
}
