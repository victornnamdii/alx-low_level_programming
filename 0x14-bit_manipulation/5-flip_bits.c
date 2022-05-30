#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits flip needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, flip = 0;

	while (xor > 0)
	{
		flip += (xor & 1);
		xor >>= 1;
	}
	return (flip);
}
