#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;

	dog = malloc(sizeof(dog_t));  /* allocate memory for struct */
	if (dog == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_copy = malloc(strlen(name) + 1);  /* allocate memory for name */
		if (name_copy == NULL)
		{
			free(dog);  /* free struct if malloc fails */
			return (NULL);
		}
		strcpy(name_copy, name);  /* copy name string */
	}
	else
		name_copy = NULL;

	if (owner != NULL)
	{
		owner_copy = malloc(strlen(owner) + 1);  /* allocate memory for owner */
		if (owner_copy == NULL)
		{
			free(name_copy);  /* free name if malloc fails */
			free(dog);        /* free struct */
			return (NULL);
		}
		strcpy(owner_copy, owner);  /* copy owner string */
	}
	else
		owner_copy = NULL;

	dog->name = name_copy;    /* set name in struct */
	dog->age = age;           /* set age in struct */
	dog->owner = owner_copy;  /* set owner in struct */

	return (dog);  /* return pointer to new dog */
}
