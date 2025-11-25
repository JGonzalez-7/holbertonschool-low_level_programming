#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the first node of the list
 * @index: position of the node to retrieve (starting at 0)
 *
 * Return: pointer to the nth node, or NULL if index is out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head; /* start at the head of the list */
	unsigned int i = 0; /* counter for tracking position */

	/* loop until we reach the desired index */
	while (current != NULL)
	{
		if (i == index)     /* if this is the node we want, return it */
			return (current);

		current = current->next; /* move to the next node */
		i++;                     /* increment index counter */
	}

	return (NULL); /* index out of range, return NULL */
}
