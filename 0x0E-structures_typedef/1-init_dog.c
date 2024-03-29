#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a struct dog
 * @d: Pointer to the struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
