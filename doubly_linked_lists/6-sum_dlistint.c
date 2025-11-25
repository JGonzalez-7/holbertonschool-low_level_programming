#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) in a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all elements; 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;         /* total sum */

	while (head != NULL) /* loop through the list */
	{
		sum += head->n;  /* add node value */
		head = head->next; /* move to next node */
	}

	return (sum);        /* return the result */
}
