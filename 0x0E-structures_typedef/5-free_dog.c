#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - a function that frees
 * a dynamically allocated instance
 * of a dog_t object
 * @d: the pointer to the dog_t instance
 * Return: void
 **/
void free_dog(dog_t *d)
{
	free(d);
}
