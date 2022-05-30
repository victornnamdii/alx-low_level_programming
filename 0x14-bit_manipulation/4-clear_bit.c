#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to be edited
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m, l = *n;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	m = 1 << index;
	*n = l & ~m;
	return (1);
}
