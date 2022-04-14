#include "main.h"
#define LARGEST 1000000000
/**
 * print_number - prints integer using putchar only
 * @n: integer
 */
void print_number(int n)
{
	int m, num, j, k, l;
	int c;

	num = n;

	if (num < 0)
	{
		num *= -1;
		putchar('-');
	}
	m = 1;
	c = 1;

	while (c)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}
	while (num >= 0)
	{
	    if (num > LARGEST)
	            {
	                m = 1;
	                c = 1;
	                l = 1;
	                k = num / LARGEST;
	                j = num % LARGEST;
	                while (c)
	                {
	                    if (k / (m * 10) > 0)
	                    m *= 10;
	                    else if (j / (l * 10) > 0)
	                    l *= 10;
	                    else
	                    c = 0;
	                }
	                while  (m > 0)
	                {
	                    putchar((k / m % 10) + '0');
	                    m /= 10;
	                }
	                while (l > 0)
	                {
	                    putchar((j / l % 10) + '0');
	                    l /= 10;
	                }
	                num = -1;
	            }
	            else{
		if (m == 1)
		{
			putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			putchar((num / m % 10) + '0');
			m /= 10;
		}
	            }
	}
}
