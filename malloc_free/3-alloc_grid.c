#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer to a 2 dimensional array
* @width: width
* @height: height
* Return: NULL or pointer
*/

int **alloc_grid(int width, int height)
{
	int j;
	int i;
	int **ar;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(ar[j]);
			}
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
