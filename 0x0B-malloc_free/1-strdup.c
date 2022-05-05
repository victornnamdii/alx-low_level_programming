#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char type pointer to string
 * Return: NULL if str is NULL, or insufficient memory available
 * On success, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dstr;
	unsigned int size, i;

	if (str == NULL)
		return  (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	dstr  = malloc((size + 1) * sizeof(char));

	if (dstr == NULL)
		return (NULL);
	for  (i = 0; i <  size; i++)
	{
		dstr[i] = str[i];
	}
	dstr[size] = '\0';
	return (dstr);
}
