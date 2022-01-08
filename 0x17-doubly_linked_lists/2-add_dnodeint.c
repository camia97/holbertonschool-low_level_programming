#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer to the first node
 * @n: int
 * Return: address of the new element or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if ((*head))
		(*head)->prev = new;
	(*head) = new;
	return (*head);
}
