#include "main.h"
#include <stdlib.h>

/**
* free_grid - function that frees a 2 dimensional grid
* @grid: grid
* @height: height
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return (NULL);
	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
