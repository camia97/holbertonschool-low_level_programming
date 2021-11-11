#include "lists.h"
/**
 * add_node_end - add node in the end
 * @head: pointer to node
 * @str: string
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux, *ptr;


	aux = malloc(sizeof(list_t));

	if (!aux)
		return (NULL);

	aux->str = strdup(str);
	aux->len = strlen(str);
	aux->next = NULL;

	if (!(*head))
	{
		*head = aux;
		return (aux);
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = aux;

	return (aux);
}
