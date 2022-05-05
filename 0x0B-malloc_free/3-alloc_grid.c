#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2 dimensional array of integers,
 * or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix ==  NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			while (i >= 0)
				free(matrix[i--]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
