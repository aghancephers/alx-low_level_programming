#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate and initialize a 2D grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2D grid, NULL if fails
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

	/* Allocate memory for each row and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory */
			for (j = i - 1; j >= 0; j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
