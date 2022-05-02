#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: char type pointer to string to be searched
 * @accept: Char type pointer to charcters to look for
 * Return: num of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int m = 0;
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = m;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				m++;
				break;
			}
		}
		if (m == j)
			break;
	}
	return (m);
}
