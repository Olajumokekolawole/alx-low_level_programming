#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - function that frees
* @grid: int pointer to a bi-D array
* @height: int
* Return: void
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
