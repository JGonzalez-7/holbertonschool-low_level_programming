#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the pointer of the first node
 * @n: integer to store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t)); /* allocate memory */
	if (new == NULL)
		return (NULL);

	new->n = n;        /* set data */
	new->next = NULL;  /* end node has no next */

	if (*head == NULL) /* empty list: new node becomes head */
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;      /* traverse to the last node */
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;  /* link last node to new node */
	new->prev = temp;  /* link new node back to last */

	return (new);
}
