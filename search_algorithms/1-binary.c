#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0;
	int idx = 0;

	while (i < size)
	{
		printf("Searching in array: ");
		for (j = i; j < size - 1; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
		idx = ((i + size) / 2);
		if (array[idx] < value)
			i = idx + 1;
		else if (array[idx] > value)
			size = idx - 1;
		else
		{
			printf("Searching in array: ");
			for (j = idx; j < size - 1; j++)
				printf("%d, ", array[j]);
			printf("%d\n", array[j]);
			return (idx);
		}
	}
	return (-1);
}
