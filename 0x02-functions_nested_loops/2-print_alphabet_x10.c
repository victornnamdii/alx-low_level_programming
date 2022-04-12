#include "main.h"
/**
 * print_alphabet_x10  - prints alphabets in 10 lines
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int j = 0;

	while (j < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		j++;
	}
}
