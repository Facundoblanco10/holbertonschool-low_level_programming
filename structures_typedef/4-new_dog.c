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
	int i;
	int n = strlen(name) + 1;
	int o = strlen(owner) + 1;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(n);
	if (dog->name == NULL)
	{
		for (i = 0; i < n; i++)
		{
			free(dog->name);
			free(dog);
		}
			return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = malloc(o);
	if (dog->owner == NULL)
	{
		for (i = 0; i < o; o++)
		{
			free(dog);
			free(dog->name);
			free(dog->owner);
		}
		return (NULL);
	}
	dog->owner = owner;
	return (dog);
}
