#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char type pointer
 */
void rev_string(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	j = i;
	while (i >= 0)
	{
		s[i] = s[j - i];
		i--;
	}
}
