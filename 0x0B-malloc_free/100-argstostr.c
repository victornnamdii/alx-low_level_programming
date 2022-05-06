#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: array of arguments
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, size = 0, j, k = 0;
	char *nstr;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i <  ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	size += ac;

	nstr = malloc(sizeof(char) * (size +  1));
	if (nstr  == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			nstr[k] = av[i][j];
			k++;
		}
		if (nstr[k] == '\0')
		{
			nstr[k++] = '\n';
		}
	}
	return (nstr);
}
