#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 * If malloc fails, the program exits with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b); /* Try to allocate memory */

	if (ptr == NULL) /* Check if malloc failed */
		exit(98); /* Terminate program with status 98 */

	return (ptr); /* Return the pointer to allocated memory */
}
