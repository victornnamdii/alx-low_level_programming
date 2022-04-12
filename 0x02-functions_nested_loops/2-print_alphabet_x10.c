#include "main.h"
/**
 * main - prints alphabets in 10 lines
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int j;

	while (j < 10)
	{
		j = 0;

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n')
		j++;
	}
}
