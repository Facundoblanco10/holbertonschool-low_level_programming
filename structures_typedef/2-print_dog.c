#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* init_dog - functiom that initialize a variable of type struct dog
* struct dog - struct
* @d: d
* @name: name
* @age: age
* @owner: owner
*/

void print_dog(struct dog *d)
{
	if (d == 0)
		exit(EXIT_SUCCESS);
	d->name == NULL ? printf("(nil)") : printf("Name: %s\n", d->name);
	d->age == 0 ? printf("(nil)") : printf("Age: %f\n", d->age);
	d->owner == NULL ? printf("(nil)") : printf("Owner: %s\n", d->owner);
}
