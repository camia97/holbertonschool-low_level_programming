#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index of a dlistint_t
 * @head: pointer to node
 * @index: index of the node to delete
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *tmp = (*head);
	unsigned int pos = 0;

	if (!(*head))
		return (-1);
	if (index == 0 && !tmp->next)
	{
		(*head) = NULL;
		free(*head);
		return (1);
	}
	if (index == 0 && tmp->next)
	{
		aux = tmp->next, aux->prev = NULL;
		free(tmp);
		(*head) = aux;
		return (1);
	}
	while (tmp)
	{
		if (pos == index && !tmp->next)
		{
			aux = tmp->prev,  aux->next = NULL;
			free(tmp);
			return (1);
		}
		if (pos == index - 1 && tmp->next)
		{
			aux = tmp->next;
			tmp->next = tmp->next->next;
			(tmp->next)->prev = tmp;
			free(aux);
			return (1);
		}
		tmp = tmp->next;
		pos++;
	}
	return (-1);
}
