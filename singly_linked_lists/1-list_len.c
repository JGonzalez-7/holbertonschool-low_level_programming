#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list (first node)
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;       /* counter for number of nodes */

	while (h != NULL)       /* loop until the end of the list */
	{
		count++;            /* increase counter for each node */
		h = h->next;        /* move to next node */
	}

	return (count);         /* return total number of nodes */
}
