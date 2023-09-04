#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a previously used 2d grid.
 * @grid: the used grid.
 * @height: No. of columns.
 * Return: Empty.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	free(grid);
	}
}
