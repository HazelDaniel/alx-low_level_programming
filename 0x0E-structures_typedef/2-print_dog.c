#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints
 * the members of a struct dog type
 * @d: a struct dog type
 **/
void print_dog(struct dog *d)
{
	char *name_placeholder = NULL;
	char *owner_placeholder = NULL;

	if (d == NULL)
		return;
	name_placeholder = d->name == NULL ? ("(nil)") : d->name;
	owner_placeholder = d->owner == NULL ? ("(nil)") : d->owner;
	printf("Name: %s\n", name_placeholder);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", owner_placeholder);
}
