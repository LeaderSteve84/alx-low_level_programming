#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list.
 * @head: a pointer head to fisrt node
 * @index: the index of the node, starting at 0
 * Return: a pointer to node of listint_t data type
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count_index = 0;

	current = head;
	while (current != NULL && count_index < index)
	{
		current = current->next;
		count_index++;
	}
	if (current == NULL)
	{
		return (NULL);
	}

	return (current);
}
