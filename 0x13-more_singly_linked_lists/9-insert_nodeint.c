#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node at a
 * given position.
 * @head: a pointer head to the first node
 * @idx:  is the index of the list where the new node
 * should be added. Index starts at 0
 * @n: the integer value of the new node.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int count_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	current = *head;

	for  (count_node = 0; current && count_node < idx; count_node++)
	{
		if (count_node == idx - 1)
		{
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
		}
		else
		{
		current = current->next;
		}
	}
	return (NULL);
}
