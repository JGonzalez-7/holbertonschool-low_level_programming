#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL); /* Invalid input */

	ptr = malloc(nmemb * size); /* Allocate memory */
	if (ptr == NULL)
		return (NULL); /* malloc failed */

	/* Set allocated memory to 0 byte by byte */
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr); /* Return pointer to allocated zeroed memory */
}
