#include "hash_tables.h"

/**
 * hash_table_set - adds or updates a key/value pair in a hash table
 * @ht: pointer to the hash table
 * @key: the key (cannot be empty)
 * @value: the value associated with the key (must be duplicated)
 *
 * Return: 1 if success, 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_copy;
	hash_node_t *new_node;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);   /* duplicate the value string */
	if (value_copy == NULL)
		return (0);              /* malloc failure */

	index = key_index((const unsigned char *)key, ht->size); /* get index */

	temp = ht->array[index];      /* start at head of list */

	/* check if key already exists, update only value */
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)  /* same key found */
		{
			free(temp->value);      /* free old value */
			temp->value = value_copy; /* replace with new value */
			return (1);
		}
		temp = temp->next;         /* move to next node */
	}

	/* create new node because key does not exist */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);          /* avoid memory leak */
		return (0);
	}

	new_node->key = strdup(key);   /* duplicate key */
	if (new_node->key == NULL)
	{
		free(value_copy);          /* free duplicated value */
		free(new_node);
		return (0);
	}

	new_node->value = value_copy;  /* assign duplicated value */
	new_node->next = ht->array[index]; /* insert at beginning */
	ht->array[index] = new_node;   /* update head pointer */

	return (1);
}
