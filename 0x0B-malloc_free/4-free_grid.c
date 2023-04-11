#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*free_grid - frees memory allocated to 2D array
*@grid: 2D array to free
*@height: height of 2D array
*
*This function frees the memory allocated to a 2D array.
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
int *row = grid[i];
free(row);
}

int *grid_ptr = *grid;
free(grid_ptr);
}
