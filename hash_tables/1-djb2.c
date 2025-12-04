#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: pointer to the string to hash
 *
 * Return: the calculated hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381; /* starting value */
	while ((c = *str++)) /* loop through each character */
	{
		hash = ((hash << 5) + hash) + c;
		/* hash * 33 + c (bit shift is faster than multiply) */
	}

	return (hash); /* return final hash value */
}
