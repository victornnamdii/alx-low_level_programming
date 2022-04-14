#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
	long n, maxPrime
	for (int i = 5; i <= sqrt(n); i += 6) 
	{
		while (n % i == 0) 
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0) 
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}
    if (n > 4)
        maxPrime = n;
	printf("%d\n", maxPrime);
	return (0);
}
