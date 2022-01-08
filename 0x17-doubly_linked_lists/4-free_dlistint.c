#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t
 * @head: pointer to node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head, *next;

	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}

}
