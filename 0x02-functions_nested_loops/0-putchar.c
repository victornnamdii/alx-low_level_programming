#include "main.h"
/**
 * main - prints  putchar and new line
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar";
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}
