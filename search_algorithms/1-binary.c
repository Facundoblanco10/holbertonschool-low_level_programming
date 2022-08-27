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
	size_t i = 0, max = 0, min = 0;
	int idx = 0;

	if (!array)
		return (-1);
	max = size - 1;
	while (min <= max)
	{
		printf("Searching in array:");
		for (i = min; i <= max; i++)
			if (i == max)
				printf(" %d\n", array[i]);
			else
				printf(" %d,", array[i]);
		idx = ((min + max) / 2);
		if (array[idx] < value)
			min = idx + 1;
		if (array[idx] > value)
			max = idx - 1;
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
