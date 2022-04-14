#include "main.h"
/**
 * print_line - prints a straight line
 * @n: how long line would be
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(95);
	}
	_putchar(10);
}
