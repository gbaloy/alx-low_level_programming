#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 *@grid: rows
 *@height: columns
 * Return: 2d 
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
