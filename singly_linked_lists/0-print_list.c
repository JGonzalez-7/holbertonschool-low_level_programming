#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the first node (head of the list)
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;    /* Counts how many nodes we printed */

	while (h != NULL)    /* Loop until we reach the end of the list */
	{
		if (h->str == NULL)     /* If the string inside the node is NULL */
			printf("[0] (nil)\n");    /* Print special format when str is NULL */
		else
			printf("[%u] %s\n", h->len, h->str); /* Print len and string */

		count++;          /* Increase node count */
		h = h->next;      /* Move to the next node */
	}

	return (count);       /* Return how many nodes were printed */
}
