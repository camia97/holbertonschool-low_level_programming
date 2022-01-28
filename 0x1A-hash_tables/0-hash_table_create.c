#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: pointer to the hash table or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int i = 0;

	new_hash = malloc(sizeof(hash_table_t) * size);
	if (!new_hash)
		return (NULL);
	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash->array)
	{
		free(new_hash);
		return (NULL);
	}
	while (i < size)
	{
		new_hash->array[i] = NULL;
		i++;
	}
	return (new_hash);
}
