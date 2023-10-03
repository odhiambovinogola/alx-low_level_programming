#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: multidimensional array of integers
 * @height: height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}
	free(grid);
}
