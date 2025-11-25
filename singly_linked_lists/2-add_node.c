#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: double pointer to the head of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;      /* pointer to the new node to be created */
	char *dup_str;         /* duplicate of the input string */
	unsigned int len = 0;  /* length of the string */

	/* check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* duplicate the string */
	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	/* compute string length */
	while (str[len])
		len++;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);    /* avoid memory leak */
		return (NULL);
	}

	/* assign values to the node fields */
	new_node->str = dup_str;   /* store duplicated string */
	new_node->len = len;       /* store string length */
	new_node->next = *head;    /* point to old head */

	/* update head to new node */
	*head = new_node;

	/* return the new node */
	return (new_node);
}
