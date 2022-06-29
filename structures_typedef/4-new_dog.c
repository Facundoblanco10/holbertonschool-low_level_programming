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
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n - 1; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	dog->owner = malloc(o);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o - 1; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	return (dog);
}
