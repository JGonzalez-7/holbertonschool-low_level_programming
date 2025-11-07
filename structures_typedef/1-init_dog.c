#include "dog.h"
#include <stddef.h> /* for NULL */

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to owner's name
 *
 * Description: This function sets the fields of a dog structure
 * with the provided values (name, age, and owner). It does nothing
 * if the pointer d is NULL.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;   /* set dog's name */
		d->age = age;     /* set dog's age */
		d->owner = owner; /* set dog's owner */
	}
}
