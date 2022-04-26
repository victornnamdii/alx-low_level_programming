#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: char type pointer to string to be searched
 * @accept: string to be searched for
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	for ( ; *s != '\0'; s++)
	{
		for ( ; *accept != '\0'; accept++)
		{
			if (*s == *accept)
				return (s);
			else if (*(s + 1) == *accept)
				return (s + 1);
		}
	}
	return (s + 1);
}
