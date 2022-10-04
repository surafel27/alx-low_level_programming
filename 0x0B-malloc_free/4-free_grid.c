#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function free memory space
 * @grid: integer ptr to ptr
 * @height: integer highet of the grid
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/*free(grid);*/
}
