#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: char type pointer to string to be searched
 * @c: character to be searched for
 * Return: pointer to the 1st occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	for ( ; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (s + 1);
}
