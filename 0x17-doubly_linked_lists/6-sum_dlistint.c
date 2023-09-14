#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: a pointer to the first node
 * Return: returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0, a;

	current = head;
	while (current != NULL)
	{
		a = current->n;
		sum += a;
		current = current->next;
	}
	if (sum == 0)
	{
		return (0);
	}
	return (sum);
}
