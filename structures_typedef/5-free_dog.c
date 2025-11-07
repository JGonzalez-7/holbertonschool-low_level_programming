#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog_t structure
 * @d: pointer to the dog_t to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)  /* check if pointer is NULL */
		return;

	free(d->name);  /* free memory allocated for dog's name */
	free(d->owner); /* free memory allocated for dog's owner */
	free(d);        /* free the structure itself */
}
