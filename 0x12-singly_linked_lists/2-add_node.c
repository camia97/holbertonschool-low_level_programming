#include "lists.h"
/**
 * add_node - add a node
 * @head: first node
 * @str: string
 * Return: the address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *aux;

	aux = malloc(sizeof(list_t));
	if (aux == NULL)
		return (NULL);
	aux->str = strdup(str);
	aux->len = strlen(str);
	aux->next = *head;
	*head = aux;
	return (*head);

}
