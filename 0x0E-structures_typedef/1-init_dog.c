#include <stdlib.h>
#include "dog.h"

/*
 * init_dog - initialise variable of dog
 * @d: pointer to structure of dog
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name =  name;
	(*d).age = age;
	(*d).owner = owner;
}
