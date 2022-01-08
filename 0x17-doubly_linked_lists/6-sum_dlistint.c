#include "lists.h"
/**
 * sum_dlistint - sum of all the data of a dlistint_t
 * @head: pointer to node
 * Return: the sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (tmp)
	{
		sum = tmp->n + sum;
		tmp = tmp->next;
	}
	return (sum);
}
