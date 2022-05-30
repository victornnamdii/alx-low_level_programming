#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to beedited
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m, l = *n;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	m = 1 << index;
	l = l | m;
	*n = l;
	return (1);
}
