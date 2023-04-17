#ifndef ___DOG_H
#define ___DOG_H
/**
 * struct dog - a structure
 * @name: a pointer to char member
 * @age: a float member
 * @owner: a pointer to char member
 **/
struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif/*___DOG_H*/
