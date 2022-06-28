#include "main.h"

/**
* free_grid - 2d array
*@grid:memory block 
*@height:height 
*Return:returns void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
