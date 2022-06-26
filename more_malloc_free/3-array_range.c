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

	if (min > max)
		return (NULL);

	ar = malloc(max * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (; min < max; min++)
	{
		ar[min] = min;
	}
	return (ar);
}
