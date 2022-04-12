#include  "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98
 * @n: number it starts  from
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			printf("%i", n);

			if (n < 98)
			{
				printf(", ");
			}
			n++;
		}
	}

	else
	{
		while (n >= 98)
		{
			printf("%i", n);

			if (n > 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
