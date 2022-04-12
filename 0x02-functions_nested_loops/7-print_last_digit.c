#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number to beprocessed
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar (((n * -1) % 10) + '0');
		return ((n * -1) % 10);
	}
	else
	{
		_putchar ((n % 10) + '0');
		return (n % 10);
	}
}
