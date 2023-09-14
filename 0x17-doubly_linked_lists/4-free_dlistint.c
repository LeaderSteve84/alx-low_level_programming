#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: a pointer to the first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

}
