#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: pointer to node
 * @n: int
 * Return: address of the new element or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last = (*head);

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (new);
}
