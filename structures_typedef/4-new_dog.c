#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	dog_t *d;        /* pointer to new dog structure */
	char *new_name;   /* copy of name string */
	char *new_owner;  /* copy of owner string */

	d = malloc(sizeof(dog_t));    /* allocate memory for dog structure */
	if (!d)                       /* check malloc success */
		return (NULL);

	new_name = malloc(strlen(name) + 1);  /* allocate memory for name string */
	if (!new_name)                         /* check malloc success */
	{
		free(d);       /* free dog structure if failed */
		return (NULL);
	}
	strcpy(new_name, name);   /* copy name into allocated memory */

	new_owner = malloc(strlen(owner) + 1); /* allocate memory for owner string */
	if (!new_owner)                        /* check malloc success */
	{
		free(new_name);  /* free name memory if failed */
		free(d);         /* free dog structure */
		return (NULL);
	}
	strcpy(new_owner, owner); /* copy owner into allocated memory */

	d->name = new_name;  /* assign name to structure */
	d->age = age;        /* assign age to structure */
	d->owner = new_owner; /* assign owner to structure */

	return (d);          /* return pointer to new dog */
}
