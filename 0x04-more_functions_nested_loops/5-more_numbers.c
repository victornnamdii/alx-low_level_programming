#include "main.h"
/**
 * more_numbers - prints nmbrs from 0 to 14 in ten lines
 */
void more_numbers(void)
{
	int a = 0, j;

	for (a = 0; a < 10; a++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar(10);
	}
	_putchar(10);
}
