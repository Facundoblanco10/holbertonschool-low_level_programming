#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - function that executes a function
* @array: array
* @size: size
* @action: action
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != 0 && array != 0)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
