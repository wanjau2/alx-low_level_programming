#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free 2d
 * @grid:2d grid
 * @height:height dimension
 * Return:Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
