#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char type pointer
 */
void rev_string(char *s)
{
	int i = 0, j;
	char k;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	k = s[i];
	j = i;
	i = 0;
	while (i <= j)
	{
		if (i > j / 2)
		{
			s[i] = k[j - i];
		}
		else
		s[i] = s[j - i];
		i++;
	}
}
