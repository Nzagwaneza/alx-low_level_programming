#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - Creates a two-dimensional matrix of integers.
 * @width: Width of the matrix.
 * @height: Height of the matrix.
 *
 * Return: Pointer to the created matrix (Success), or NULL (Error).
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	matrix = (int **)malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			free(matrix);
			for (j = 0; j < i; j++)
				free(matrix[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
