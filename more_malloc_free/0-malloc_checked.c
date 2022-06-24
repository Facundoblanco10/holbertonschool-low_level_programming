#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocate memory using malloc
*
* @b: 
*/

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if(i == NULL)
		exit(98);
	return (i);
}
