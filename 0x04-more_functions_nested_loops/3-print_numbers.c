#include "main.h"
/**
 * print_numbers - prints numbersfrom 0 to 9
 */
void print_numbers(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar(10);
}
