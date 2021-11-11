#include "lists.h"
/**
 * free_list - function that free list_t
 * @head: pointer to node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
