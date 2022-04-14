#include "main.h"
/**
 * _isdigit - checks if character is a digit
 * @c: character to be checked
 * Return: 1 if it is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
