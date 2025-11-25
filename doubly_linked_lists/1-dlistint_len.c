#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0; /* keeps track of how many nodes */

	while (h != NULL) /* loop until end of list */
	{
		count++;    /* count the current node */
		h = h->next; /* move to the next node */
	}

	return (count); /* return how many nodes were counted */
}
