#include "hash_tables.h"

/**
 * key_index - Get the index for a given key in a hash table
 * @key: The key (string) to hash
 * @size: The size of the hash table array
 *
 * Return: The index where the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);   /* Compute hash using djb2 */
	return (hash_value % size);    /* Map hash to array index */
}
