#include <stdio.h>
#include <stdlib.h>
/**
 * ccoin - checks amt of coins needed
 * @n: number of cents to be paid back
 * Return: value of coins needed
 */
int ccoin(int n)
{
	int m;

	if (n >= 25)
	{
		m = n / 25;
		return (m + ccoin(n % 25));
	}
	else if (n >= 10)
	{
		m = n / 10;
		return (m + ccoin(n % 10));
	}
	else if (n >= 5)
	{
		m = n / 5;
		return (m + ccoin(n % 5));
	}
	else if (n >= 2)
	{
		m = n / 2;
		return (m + ccoin(n % 2));
	}
	else if (n == 1)
		return (1);
	else
		return (0);
}

/**
 * main -  prints the minimum number of coins to
 * make change for an amount of money
 * @argc: argument counter
 * @argv: array of counters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	if (i <= 0)
		printf("0\n");
	else
	{
		coin = ccoin(i);
		printf("%i\n", coin);
	}
	return (0);
}
