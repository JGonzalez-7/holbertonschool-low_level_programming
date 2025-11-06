#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to the new array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL); /* Invalid range */

	size = max - min + 1; /* Calculate how many integers to store */

	arr = malloc(sizeof(int) * size); /* Allocate memory */
	if (arr == NULL)
		return (NULL); /* malloc failed */

	for (i = 0; i < size; i++)
		arr[i] = min + i; /* Fill array from min to max */

	return (arr); /* Return pointer to new array */
}
