#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print all elements of dlistint_t
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (!h)
		return (nodes);
	nodes++;
	printf("%d\n", h->n);
	if (h->next)
		nodes += print_dlistint(h->next);
	return (nodes);
}
