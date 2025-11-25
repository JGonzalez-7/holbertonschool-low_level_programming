#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: address of the new element, or NULL if memory fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t)); /* allocate memory */
	if (new == NULL)
		return (NULL);

	new->n = n;            /* set data */
	new->prev = NULL;      /* new head has no previous */
	new->next = *head;     /* link to old head */

	if (*head != NULL)     /* if list not empty, fix old head prev */
		(*head)->prev = new;

	*head = new;           /* update head pointer */

	return (new);
}
