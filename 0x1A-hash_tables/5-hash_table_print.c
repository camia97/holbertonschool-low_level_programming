#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;
	char *str;

	if (!ht)
		return;
	printf("{");
	str = "";
	i = 0;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("%s'%s': '%s'", str, tmp->key, tmp->value);
			tmp = tmp->next;
			str = ", ";
		}
		i++;
	}
	printf("}\n");
}
