#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees all nodes of a linked list
 * @head: pointer to the first node of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp; /* temporary pointer to store next node */

	while (head != NULL) /* loop through all nodes */
	{
		tmp = head->next; /* save next node before freeing */
		free(head->str); /* free the duplicated string */
		free(head); /* free the node */
		head = tmp; /* move to next node */
	}
}
