#include "dog.h"

/**
 * init_dog - initializing a variable of struct dog
 * @d: dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: it is void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
