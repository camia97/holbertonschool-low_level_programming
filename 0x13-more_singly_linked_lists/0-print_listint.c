#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to struct listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node = 0;

	node++;
	printf("%d\n", h->n);
	
	if (h->next)
		node += print_listint(h->next);
	return (node);
}
