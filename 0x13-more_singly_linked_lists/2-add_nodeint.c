#include "lists.h"
/**
 * add_nodeint - add a node at the beginning
 * @head: pointer to a node in the struct
 * @n: int
 * Return: addres of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aux;

	aux = malloc(sizeof(listint_t));
	if (!aux)
		return (NULL);
	aux->n = n;
	aux->next = *head;
	*head = aux;
	return (*head);
}
