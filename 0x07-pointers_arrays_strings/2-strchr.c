#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: char type pointer to string to be searched
 * @c: character to be searched for
 * Return: pointer to the 1st occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;
	char j[1];

	for (i = 0; s[i] != '\0'; i++)
	{
		j[0] = s[i];
		if (s[i] == c)
			return (&s[i]);
	}
	j[0] = s[i];
	return (j[0]);
}
