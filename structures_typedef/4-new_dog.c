#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t)); /* allocate memory for struct */

	if (!d)
		return (NULL);

	d->name = name;  /* assign pointer */
	d->age = age;
	d->owner = owner;

	return (d);
}
