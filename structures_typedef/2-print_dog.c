#include "dog.h"
#include <stdio.h>


/**
 * print_dog - prints the information of a struct dog
 * @d: pointer to struct dog
 *
 * Description: Prints name, age, and owner of a dog.
 * If d is NULL, prints nothing. If name or owner is NULL,
 *
 * prints (nil) instead of the missing value.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
