#include "hash_tables.h"

/**
 * hash_table_set - add or update a key/value pair in a hash table
 * @ht: pointer to the hash table
 * @key: key string (must not be empty)
 * @value: value string (will be duplicated)
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *tmp;
	char *val_copy;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	val_copy = strdup(value ? value : "");
	if (val_copy == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = val_copy;
			return (1);
		}
		tmp = tmp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(val_copy);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(val_copy);
		free(node);
		return (0);
	}
	node->value = val_copy;
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
