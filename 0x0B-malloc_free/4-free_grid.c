#include "main.h"
/**
 *free_grid - function parameter
 *@grid:pointer to array
 *@height:pointer to row
 *Return: pointer to return
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
