#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string without using strcpy
 * @str: string to duplicate
 * Return: pointer to new string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *copy;      /* pointer for duplicated string */
	int len = 0, i;  /* counters */

	if (!str)        /* if input string is NULL */
		return (NULL);

	while (str[len])  /* calculate string length */
		len++;

	copy = malloc(len + 1);  /* allocate memory for copy */
	if (!copy)               /* check malloc success */
		return (NULL);

	for (i = 0; i <= len; i++) /* copy each character including '\0' */
		copy[i] = str[i];

	return (copy); /* return pointer to duplicated string */
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d; /* pointer for new dog struct */

	d = malloc(sizeof(dog_t)); /* allocate memory for struct */
	if (!d)                     /* check malloc success */
		return (NULL);

	d->name = _strdup(name);  /* duplicate name */
	d->owner = _strdup(owner);/* duplicate owner */
	d->age = age;                        /* set age */

	if ((!d->name && name) || (!d->owner && owner)) /* check duplication */
	{
		free(d->name);  /* free name memory */
		free(d->owner); /* free owner memory */
		free(d);        /* free struct memory */
		return (NULL);
	}

	return (d); /* return pointer to new dog */
}
