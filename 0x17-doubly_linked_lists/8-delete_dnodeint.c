#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: pointer to pointer to the first node
 * @index: is the index of the node that should be deleted.
 * Index starts at 0
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0 && current->next != NULL)
	{
		*head = current->next;
		current->next->prev = NULL;
		free(current);
		return (1);
	}
	if (index == 0 && current->next == NULL)
	{
		*head = NULL;
		free(current);
		return (1);
	}
	for (i = 0; current && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		current->prev = NULL;
		free(current);
		return (1);
	}
	if (current != NULL && current->next != NULL)
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
	}
	return (1);
}
