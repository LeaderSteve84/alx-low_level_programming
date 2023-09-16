#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position.
 * @h: pointer to pointer to first node
 * @idx:  index of the list where the new node should
 * be added. Index starts at 0
 * @n: int value in new_node
 * Return: pointer to new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (h == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	current = *h;
	for (i = 0; current && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next->prev = new_node;
			current->next = new_node;
			new_node->prev = current;

			return (new_node);
		}
		else
		{
			current = current->next;
		}
	}
	return (NULL);
}
