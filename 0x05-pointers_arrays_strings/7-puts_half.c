#include "main.h"
/**
 * puts_half - prints 2nd half of a string
 * @str: char type pointer
 */
void puts_half(char *str)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 != 0)
		j = i + 2;
	else
		j = i;
	for (k = j / 2; str[k] != '\0';  k++)
	{
		_putchar(str[k]);
	}
	_putchar(10);
}
