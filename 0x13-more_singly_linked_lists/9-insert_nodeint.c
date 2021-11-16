#include "lists.h"
/**
 * insert_nodeint_at_index - a
 * @head: pointer to a node of the struct
 * @idx: the index of the list where the new node
 * @n: int in the new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *new;
	unsigned int pos = 0;


	if ((*head))
	{
		new = malloc(sizeof(listint_t));
		new->n = n;
		if (!new)
			return (NULL);
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (*head);
		}
		while (pos < idx - 1)
		{
			if (tmp->next)
				tmp = tmp->next;
			pos++;
		}
		if (pos >= idx)
		{
			free(new);
			return (NULL);
		}
		new->next = tmp->next;
		tmp->next = new;
	}
	return (NULL);
}
