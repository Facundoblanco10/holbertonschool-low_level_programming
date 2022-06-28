#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - print a struct dog
* @d: d
*/

void print_dog(struct dog *d)
{
	if (d == 0)
		exit(EXIT_SUCCESS);
	d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	d->age == 0 ? printf("Age: %f\n", d->age) : printf("Age: %f\n", d->age);
	d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
