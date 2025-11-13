#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an integer array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @action: Pointer to the function to be executed on each element
 *
 * Description: This function iterates through each element of the array
 * and calls the function pointed to by @action, passing the element
 * as an argument. If @array or @action is NULL, the function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
