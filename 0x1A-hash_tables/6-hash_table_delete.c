#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp, *aux;

	if (!ht)
		return;
	tmp = NULL;
	aux = NULL;
	while (index < ht->size)
	{
		aux = ht->array[index];
		while (aux)
		{
			tmp = aux->next;
			free(aux->key);
			free(aux->value);
			free(aux);
			aux = tmp;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
