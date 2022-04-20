#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: char type pointer
 */
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	i--;
	j = i;
	for (i = 0; i <= j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
