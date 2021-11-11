#include "lists.h"
#include <stdio.h>
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
			node += print_list(h->next);
		}
	}
	return (node);
}
