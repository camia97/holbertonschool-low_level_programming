#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints a list
 * @h: pointer to a list
 * Return: numbers of nodes
 */
size_t print_list(const list_t *h)
{
	int node = 0;

	if (h)
	{
		node++;
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		printf("[%d] %s\n", h->len, h->str);
		if (h->next)
		{
			node += print_list(h->next);
		}
	}
	return (node);
}
