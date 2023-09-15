#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the
 * nth node of a dlistint_t linked list.
 * @head: a pointer tto the first node
 * @index: positon to return node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (i < index)
	{
		if (index == 0)
		{
			return (current);
		}
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (NULL);
	}

	return (current);
}
