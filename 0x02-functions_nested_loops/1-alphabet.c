#include "main.h"
/**
 * print_alphabet - prints all alphabets then new line
 * Return: 0
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= z)
	{
		_putchar(a);
		a++
	}
	_putchar('\n');
}
