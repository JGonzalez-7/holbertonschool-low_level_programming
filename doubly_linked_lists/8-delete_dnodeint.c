#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to delete (starting at 0)
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	/* Check if list exists or is empty */
	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	/* If deleting the head node */
	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL; /* update new head prev link */
		free(temp);
		return (1);
	}

	/* Traverse to the node at the given index */
	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	/* If index is out of range */
	if (temp == NULL)
		return (-1);

	/* Adjust previous node's next pointer */
	if (temp->prev)
		temp->prev->next = temp->next;

	/* Adjust next node's prev pointer */
	if (temp->next)
		temp->next->prev = temp->prev;

	/* Free the target node */
	free(temp);
	return (1);
}
