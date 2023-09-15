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

	current = *h;

	if (h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	/*if (idx == )*/
	/*{*/

	/*}*/

	for (i = 0; i <= idx; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	else
	{
		current->prev->next = new_node;
		new_node->next = current;
		new_node->prev = current->prev;
		current->prev = new_node;
		new_node->n = n;
	}
	return (new_node);
}
