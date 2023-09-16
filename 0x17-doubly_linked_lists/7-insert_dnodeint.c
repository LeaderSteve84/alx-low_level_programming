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

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		current = *h;
		i = 1;
		if (current != NULL)
			while (current->prev != NULL)
				current = current->prev;
		while (current != NULL)
		{
			if (i == idx)
			{
				if (current->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = current->next;
						new_node->prev = current;
						current->next->prev = new_node;
						current->next = new_node;
					}
				}
				break;
			}
			current = current->next;
			i++;
		}
	}
	return (new_node);
}
