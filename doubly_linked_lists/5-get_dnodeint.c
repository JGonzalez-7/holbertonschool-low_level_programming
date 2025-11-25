#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a given index
 * @head: pointer to the first node (head) of the list
 * @index: index of the node to return (starting at 0)
 *
 * Return: pointer to the node at index, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head; /* pointer used to traverse */
	unsigned int count = 0; /* tracks the current node position */

	/* loop through list until we reach index or run out of nodes */
	while (tmp != NULL)
	{
		if (count == index) /* if current node is the one we want */
			return (tmp);

		tmp = tmp->next; /* move to next node */
		count++; /* increment position counter */
	}

	return (NULL); /* index out of range */
}
