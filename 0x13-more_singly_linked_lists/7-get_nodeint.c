#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node
 * @head: pointer to the struct
 * @index: index of the node
 * Return: null if the node is null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int aux = 0;

	while (head && aux != index)
	{
		head = head->next;
		aux++;
	}
	if (head)
		return (head);
	else
		return (NULL);
}
