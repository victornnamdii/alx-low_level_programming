#include  "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: char type pointer to destination
 * @s2: char type pointer  to source
 * @n: number of characters to take from s2
 * Return: NULL if failed,
 * else pointer should point to a newly allocated space
 * in memory which contains the contents of s1.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int i, j, size1, size2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	if (n >= size2)
		nstr = malloc((size1 + size2 + 1) * sizeof(char));
	else
	{
		nstr = malloc((size1 + n + 1) * sizeof(char));
		size2 = n;
	}
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		nstr[i] = s1[i];
	}
	for (i = size1, j = 0; i < (size1 + size2); i++, j++)
	{
		nstr[i] = s2[j];
	}
	nstr[size1 + size2] = '\0';
	return (nstr);
}
