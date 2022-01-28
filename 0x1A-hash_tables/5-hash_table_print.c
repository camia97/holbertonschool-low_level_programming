#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;
	char *str;

	if (!ht)
		return;
	printf("{");
	str = "";
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("%s'%s': '%s'", str, tmp->key, tmp->value);
			str = ", ";
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
