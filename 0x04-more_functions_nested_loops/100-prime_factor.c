#include <math.h>
#include <stdio.h>
/**
 * maxPrimeFactors - finds largest prime factor
 * @n: value to be checked
 * Return: max prime  number
 */
void maxPrimeFactors(long n)
{
    long maxPrime = -1;
 
    while (n % 2 == 0)
    {
        maxPrime = 2;
        n >>= 1; 
    }
    while (n % 3 == 0)
    {
        maxPrime = 3;
        n = n / 3;
    }
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
    printf("%ld\n", n);
}
int main(void)
{
    maxPrimeFactors(612852475143);
    return (0);
}
