#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end
 * @head: pointer to the node of the struct
 * @n: int
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *aaux;

	aux = malloc(sizeof(listint_t));
	if (!aux)
		return (NULL);
	aux->n = n;
	aux->next = NULL;
	if (!(*head))
	{
		*head = aux;
		return (aux);
	}
	aaux = *head;

	while (aaux->next)
		aaux = aaux->next;
	aaux->next = aux;

	return (aux);
}
