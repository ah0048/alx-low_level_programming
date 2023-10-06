#include "main.h"
#include <stdlib.h>
/**
 * free_grid - create array
 * @height: 2nd string to copy
 * @grid: 2d array
 * Return: null or array
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
