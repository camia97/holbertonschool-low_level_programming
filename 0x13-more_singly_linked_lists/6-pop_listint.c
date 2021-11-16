#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the node of the struct
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	unsigned int a;

	if (!(*head))
		return (0);

	a = (*head)->n;
	aux = (*head);
	(*head) = (*head)->next;
	free(aux);
	return (a);
}
