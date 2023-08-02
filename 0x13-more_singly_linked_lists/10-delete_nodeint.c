#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: a pointer to a pointer of head to first node
 * @index: the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp = NULL;
	unsigned int count_node = 0;

	current = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (count_node < index - 1)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
		count_node++;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
