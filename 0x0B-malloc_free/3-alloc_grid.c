#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: Pointer to the allocated 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for the columns in each row and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory on failure */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
