#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to be raised
 * @y: power
 * Return: value of x raised to the power of y
 */
unsigned int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
/**
 * binary_to_uint - converts binary to decimal
 * @b: string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, pow, j;
	unsigned int conv = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		pow = i;
	}
	for (i = 0; pow >= 0 && b[i] != '\0'; i++, pow--)
	{
		j = b[i] - '0';
		conv += (j * _pow_recursion(2, pow));
	}
	return (conv);
}
