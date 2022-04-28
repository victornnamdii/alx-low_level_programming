#include "main.h"
/**
 * _sqrt - finds square root
 * @a: number
 * @b: root
 * Return: the natural root or -1 if not possible
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b  > a)
		return (-1);
	return (_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: given number
 * Return: natural square root of a number or -1 if  nonexistent
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
