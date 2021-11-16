#include "lists.h"
/**
 * free_listint - free the lisint_t
 * @head: pointer to the struct
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
