#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - return number of elements in dlistint_t
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	if (!h)
		return (nodes);
	nodes++;
	if (h->next)
		nodes += dlistint_len(h->next);
	return (nodes);
}
