#include "main.h"
#include <stdlib.h>
/**
 * strtow  - splits a string into words
 * @str: char type pointer to string
 * Return: a pointer to an array of strings
 * NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */
char **strtow(char *str)
{
	int i, j, size, wcount;
	char  **arr;

	if (str == 0 || str == "")
		return (NULL);
	for (size = 0, wcount = 0; str[size] != '\0'; size++)
	{
		if (str[size] >  32 && str[size] < 127)
		{
			if (str[size - 1] == 32 || str[size - 1] == 10 || str[size - 1] == 9)
				wcount++;
		}
	}
	arr = malloc((wcount + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < wcount; i++)
	{
		arr[i] = malloc((size + 1) * sizeof(char));
		if (arr[i] == NULL)
		{
			while (i >= 0)
				free(arr[i--]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < size; j++)
		{

		}
	}
}
