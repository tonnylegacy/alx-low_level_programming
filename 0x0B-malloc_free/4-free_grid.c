#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array of integers
 * @grid: The grid to be freed
 * @height: The height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	/* Free memory for each row */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free memory for the grid */
	free(grid);
}
