#include "main.h"
/**
 * print_number - prints integer using putchar only
 * @n: integer
 */
void print_number(int n)
{
	int m, num;
	int c;
	num = n;

	if (num < 0)
	{
		_putchar(45);
		num = -1 * num;
	}
	m = 1;
	c = 1;

	while (c)
	{
		if (num / (m * 10) > 0)
			m = m * 10;
		else
			c = 0;
	}
	while (num >=0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar(num / m % 10 + '0');
			m = m / 10;
		}
	}
}
