#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of array
 * @c: specified character
 * Return: NULL if size is 0, or it fails
 * otherwise a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size ==  0)
		return (NULL);
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
