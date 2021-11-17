#include "lists.h"
/**
 * free_listint2 - free listint_t
 * @head: pointer to the node of the struct
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head)
	{
		while (*head)
		{
			aux = *head;
			(*head) = (*head)->next;
			free(aux);
		}
		*head = NULL;
	}
}
