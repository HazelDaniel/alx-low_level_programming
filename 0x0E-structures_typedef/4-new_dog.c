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
	char *name_m = name, *owner_m = owner;

	if (dog_p == NULL)
		return (dog_p);
	if (name == NULL)
		name_m = "(nil)";
	if (owner == NULL)
		owner_m = "(nil)";

	dog_p->name = name_m;
	dog_p->age = age;
	dog_p->owner = owner_m;
	return (dog_p);
}
