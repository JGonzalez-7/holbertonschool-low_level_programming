#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;      /* counter for nodes */

	while (h != NULL)      /* loop through list until no more nodes */
	{
		printf("%d\n", h->n); /* print the node's integer */
		h = h->next;          /* move to the next node */
		count++;              /* increment node count */
	}

	return (count);        /* return total number of nodes */
}
