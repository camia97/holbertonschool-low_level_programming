#include "lists.h"
/**
 * sum_listint - sum of all the data n
 * @head: pointer to the struct
 * Return: the sum of n
 */
int sum_listint(listint_t *head)
{
	int a = 0;
	listint_t *tmp;

	if (!head)
		return (0);
	tmp = head;
	while (tmp)
	{
		a += tmp->n;
		tmp = tmp->next;
	}
	return (a);

}
