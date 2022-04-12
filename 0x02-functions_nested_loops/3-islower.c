#include "main.h"
/**
 * _islower - checks if alphabet is lowercase
 * @c: the character to be checked
 * Return: 1 if lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
