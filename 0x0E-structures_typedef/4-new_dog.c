#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creating new dog
 * @name: new dogs name
 * @age: new dogs age
 * @owner: new dogs owner
 * Return: struct dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int k;
	int kname;
	int kowner;
	dog_t *k_dog;

	k_dog = malloc(sizeof(*k_dog));
	if (k_dog == NULL || !(name) || !(owner))
	{
		free(k_dog);
		return (NULL);
	}
	for (kname = 0 ; name[kname] ; kname++)
		;
	for (kowner = 0 ; owner[kowner] ; kowner++)
		;
	k_dog->name = malloc(kname + 1);
	k_dog->owner = malloc(kowner + 1);
	if (!(k_dog->name) || !(k_dog->owner))
	{
		free(k_dog->owner);
		free(k_dog->name);
		free(k_dog);
		return (NULL);
	}
	for (k = 0 ; k < kname ; k++)
		k_dog->name[k] = name[k];
	k_dog->name[k] = '\0';
	k_dog->age = age;
	for (k = 0 ; k < kowner ; k++)
		k_dog->owner[k] = owner[k];
	k_dog->owner[k] = '\0';
	return (k_dog);
}
