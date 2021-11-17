#include "lists.h"
/**
 * delete_nodeint_at_index - a
 * @head: pointer to a node in struct
 * @index: the index of the node to delete
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	unsigned int a = 0;

	if (index == 0)
	{
		(*head) = tmp->next;
		free(tmp);
	}
	while (a < index - 1)
	{

	}
}
