#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of the first element for which cmp does not return 0
 *         -1 if no match is found or if size <= 0
 *         -1 if array or cmp is NULL
 *
 * Description: This function iterates over the array and applies
 * the comparison function cmp to each element. It returns the
 * index of the first element that satisfies the condition
 * (i.e., cmp returns non-zero). Otherwise, it returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
