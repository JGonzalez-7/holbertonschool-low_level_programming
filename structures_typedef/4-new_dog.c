#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * new_dog - creates a new dog and prints a message
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t)); /* allocate memory for dog */
		if (!d)
		return (NULL);

	d->name = name;    /* just assign pointers, no copying */
	d->age = age;
	d->owner = owner;

	/* Print the custom message */
	printf("My name is %s, and I am %.1f :) - Woof!\n", d->name, d->age);

	return (d);
}

int main(void)
{
	dog_t *p = new_dog("Poppy", 3.5, "Alice");

	free(p); /* free memory */
	return (0);
}
