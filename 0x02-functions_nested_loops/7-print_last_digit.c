#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number to beprocessed
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = -1 * (n % 10);
		_putchar (m  + '0');
		return (m);
	}
	else
	{
		m = (n % 10);
		_putchar (m + '0');
		return (m);
	}
}
