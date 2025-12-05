#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 *
 * Description: Frees all nodes, all keys, all values,
 * the array, and finally the hash table structure itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;	/* Nothing to delete */

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];	/* Get first node in index */

		while (node)
		{
			temp = node->next;	/* Save next node */
			free(node->key);	/* Free key string */
			free(node->value);	/* Free value string */
			free(node);		/* Free node itself */
			node = temp;		/* Move to next node */
		}
	}

	free(ht->array);		/* Free internal array */
	free(ht);			/* Free hash table struct */
}
