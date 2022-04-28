#include "main.h"
/**
 * _pprime - checks if an int is a prime number
 * @a: integer
 * @b: divisor
 * Return: 1 if prime number else 0
 */
int _pprime(int a, int b)
{
	if (a % b == 0 && a == b)
		return (1);
	else if (a % b == 0 && b < a)
		return (0);
	return (_pprime(a, b + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input integer
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_pprime(n, 2));
}
