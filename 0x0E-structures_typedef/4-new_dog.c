#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a
 * new instance of a dog_t object
 * @name: a char* parameter
 * @age: a float parameter
 * @owner: a char* parameter
 * Return: a new dot_t object
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_p = (dog_t *)malloc(sizeof(dog_t));
	int name_i, owner_i, i;

	if (dog_p == NULL || !(name) || !(owner))
	{
		free(dog_p);
		return (NULL);
	}
	for (name_i = 0; name[name_i] != '\0'; name_i++)
		;
	for (owner_i = 0; owner[owner_i] != '\0'; owner_i++)
		;
	dog_p->name = (char *)malloc((name_i + 1) * sizeof(char));
	dog_p->owner = (char *)malloc((owner_i + 1) * sizeof(char));
	if (!dog_p->name || !dog_p->owner)
	{
		free(dog_p->name);
		free(dog_p->owner);
		free(dog_p);
		return (NULL);
	}
	for (i = 0; i < name_i; i++)
		(dog_p->name)[i] = name[i];
	(dog_p->name)[i] = '\0';
	for (i = 0; i < owner_i; i++)
		(dog_p->owner)[i] = owner[i];
	(dog_p->owner)[i] = '\0';
	dog_p->age = age;

	return (dog_p);
}
