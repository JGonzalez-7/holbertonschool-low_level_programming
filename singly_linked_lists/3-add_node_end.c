#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* allocate new node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* duplicate string */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++; /* count string length */

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL) /* empty list → new node becomes head */
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL) /* go to last node */
		temp = temp->next;

	temp->next = new_node; /* attach at end */
	return (new_node);
}
