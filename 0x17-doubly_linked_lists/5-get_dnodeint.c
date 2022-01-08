#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t
 * @head: pointer to node
 * @index: index of the node
 * Return: the nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int pos = 0;

	while (tmp)
	{
		if (pos == index)
			return (tmp);
		pos++;
		if (tmp->next)
			tmp = tmp->next;
		else
			break;
	}
	return (NULL);
}
