#include "main.h"
#include <stdlib.h>

/**
* array_range - function that creates an arrray of integers
* @min: min
* @max: max
* Return: NULL or the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (0);

	ar = malloc(4 + (max * sizeof(int)));
	if (ar == NULL)
		return (0);

	for (i = 0; min <= max; min++, i++)
	{
		ar[i] = min;
	}
	return (ar);
}
