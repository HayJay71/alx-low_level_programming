#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));

	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);

	}

	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(gridout[j]);
			free(gridout);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridout[i][j] = 0;

	return (gridout);
}
