#include "main.h"
#include <stdlib.h>

/**
* create_array - entry point
* @size: size
* @c: char
* Return: return NULL or a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
	if (s == NULL)
	{
		return (NULL);
	}
}
