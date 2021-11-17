#include "lists.h"
/**
 * funcrev - function to rev
 * @back: back node
 * @head: pointer to first node
 * Return: revers listint_t
 */
listint_t *funcrev(listint_t *back, listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return (back);
	tmp = head->next;
	head->next = back;
	return (funcrev(head, tmp));
}
/**
 * reverse_listint - reverse a listint_t
 * @head: pointer to node
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	*head = funcrev(NULL, *head);
	return (*head);
}
