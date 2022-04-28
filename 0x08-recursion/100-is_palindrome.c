#include "main.h"
/**
 * _strlen - checks string length
 * @a: char type pointer to string
 * Return: length of  string
 */
int _strlen(char *a)
{
	int i = 0;

	if (*a != '\0')
	{
		i = 1 + _strlen(a + 1);
	}
	return (i);
}

/**
 * _palchk - checks if string is a palindrome
 * @i: string
 * @j: string length
 * Return: 1 if palindrome, 0 otherwise
 */
int _palchk(char *i, int j)
{
	if (j <= 0)
		return (1);
	if (*i == *(i + j - 1))
		return (_palchk(i + 1, j - 2));
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a  palindrome
 * @s: char type pointer to string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int size;

	size = _strlen(s);
	return (_palchk(s, size));
}
