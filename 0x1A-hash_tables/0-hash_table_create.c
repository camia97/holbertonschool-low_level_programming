#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: pointer to the hash table or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	new_hash = malloc(sizeof(hash_table_t) * size);
	if (!new_hash)
		return (NULL);
	return (new_hash);
}
