#include "lists.h"
/**
 * list_len - return the numbers of nodes
 * @h: pointer to a list
 * Return: numbers of nodes
 */
size_t list_len(const list_t *h)
{
	int node = 0;

	if (h)
	{
		node++;
		if (h->next)
		{
			node += list_len(h->next);
		}
	}
	return (node);
}
