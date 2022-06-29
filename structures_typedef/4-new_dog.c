#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - new dog
* @name: name
* @age: age
* @owner: owner
* Return: 0
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(1 + strlen(name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = malloc(1 + strlen(owner));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		free(dog->owner);
		return (NULL);
	}
	dog->owner = owner;
	return (dog);
}
