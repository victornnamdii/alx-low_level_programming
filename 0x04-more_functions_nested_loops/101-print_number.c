#include "main.h"
#define LARGEST 1000000000
/**
 * print_number - prints integer using putchar only
 * @n: integer
 */
void print_number(int n)
{
	int m, num = n, j, k, l, c;
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}
	m = 1; c = 1; l = 1;
	k = num / LARGEST;
	j = num % LARGEST;
	while (c)
	{
		if (num / (m * 10) > 0 && num <= LARGEST)
			m *= 10;
		else if (k / (m * 10) > 0)
			m *= 10;
		else if (j / (l * 10) > 0)
			l *= 10;
		else
			c = 0;
	}
	if (num > LARGEST)
	{
		while  (m > 0)
		{
			_putchar((k / m % 10) + '0');
			m /= 10;
		}
		while (l > 0)
		{
			_putchar((j / l % 10) + '0');
			l /= 10;
		}
	}
	else
	{
		while (num >= 0)
		{
			if (m == 1)
			{
				_putchar(num % 10 + '0');
				num = -1;
			}
			else
			{
				_putchar((num / m % 10) + '0');
				m /= 10;
			}
		}
	}
}
