#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at the given position
 * @h: pointer to node
 * @idx: index of the list where new node to add
 * @n: int
 * Return: address of the new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = (*h), *aux;
	unsigned int pos = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (tmp)
	{
		if (pos == idx - 1 && tmp->next == NULL)
			return (add_dnodeint_end(h, n));
		if (pos == idx - 1)
		{
			aux = tmp->next;
			tmp->next = new;
			aux->prev = new;
			new->next = aux;
			new->prev = tmp;
			return (new);
		}
		tmp = tmp->next;
		pos++;
	}
	return (NULL);
}
