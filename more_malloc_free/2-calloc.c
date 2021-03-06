#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: elements
* @size: bytes
* Return: a pointer to the allocated memory or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(size * nmemb);
	if (ar == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		ar[i] = 0;
	}
	return (ar);
}
