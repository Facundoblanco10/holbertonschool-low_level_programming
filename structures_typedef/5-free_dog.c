#include "dog.h"
#include <stdlib.h>

/**
* free_dog - free dogs
* @dog_t - dog
* @d: dog
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
