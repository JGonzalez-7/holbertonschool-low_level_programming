#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer of the head of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;        /* pointer for the new node */
	list_t *temp;            /* pointer to traverse the list */
	char *dup_str;           /* duplicated string */
	int len = 0;             /* length of the string */

	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Duplicate the string */
	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	/* Count the length of the string */
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);   /* avoid memory leak */
		return (NULL);
	}

	/* Initialize the new node */
	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	/* If the list is empty, set new node as head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Otherwise, traverse to the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Link the last node with the new node */
	temp->next = new_node;

	/* Return the new node */
	return (new_node);
}
