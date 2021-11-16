#include "lists.h"
/**
 * listint_len - return the number of nodes
 * @h: pointer to struct listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int node = 0;

	if (!h)
		return (node);
	node++;

	if (h->next)
		node += listint_len(h->next);
	return (node);
}
