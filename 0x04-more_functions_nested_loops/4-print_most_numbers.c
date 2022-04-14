#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 apart from 2 and 4
 */
void print_most_numbers(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
	}
	_putchar(10);
}
