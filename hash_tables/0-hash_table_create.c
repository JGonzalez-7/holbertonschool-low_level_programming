#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the array
 *
 * Return: pointer to the new hash table, or NULL if something fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t)); /* allocate table structure */
	if (ht == NULL)
		return (NULL);

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t *) * size); /* allocate array */
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++) /* initialize all slots to NULL */
		ht->array[i] = NULL;

	return (ht);
}
