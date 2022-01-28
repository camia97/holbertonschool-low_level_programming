#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add
 * @key: the key
 * @value: value of the key
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *rep_key;
	hash_node_t *new_ele;

	if (!ht || !value)
		return (0);
	rep_key = (const unsigned char *)strdup(key);
	index = key_index(rep_key, ht->size);
	if (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new_ele = malloc(sizeof(*new_ele));
	if (!new_ele)
		return (0);
	new_ele->key = (char *)rep_key;
	new_ele->value = strdup(value);
	if (index >= ht->size)
		return (0);
	new_ele->next = ht->array[index];
	ht->array[index] = new_ele;
	return (1);
}
