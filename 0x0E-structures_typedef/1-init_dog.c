#include "dog.h"
/**
 * init_dog - a function that initializes
 * a struct dog object
 * @d: the address of the object
 * @name: a char* member
 * @age: a float member
 * @owner: a char* member
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
