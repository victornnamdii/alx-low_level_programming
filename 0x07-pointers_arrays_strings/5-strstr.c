#include  "main.h"
/**
 * _strstr - locates a substring
 * @haystack: char type pointer to string
 * to be searched
 * @needle: char type pointer to string
 * to be searched for
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int m = 0;

	for (i = 0; needle[i] != '\0'; i++)
		;
	k = i;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			m = 1;
			for (j = 1; j < k && needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
					m++;
			}
			if (m == k)
				return (&haystack[i]);
		}
	}
	return (0);
}
