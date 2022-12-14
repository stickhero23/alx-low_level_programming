#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2D grid previously created.
 * @grid: The grid to be freed
 * @height: height of the grid
 * Return: returns freed memory
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
		free(grid);

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
