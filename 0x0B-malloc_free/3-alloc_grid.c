#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid- returns a pointer to 2D array
 * @width: width of column length
 * @height: height of number of rows
 * Return: returns a pointer to 2D arrays
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return NULL;

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
