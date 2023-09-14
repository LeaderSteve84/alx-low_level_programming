#include "lists.h"
/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list.
 * @h: pointer to the first head
 * Return: the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t a = 0;

	current = h;
	while (current != NULL)
	{
		a++;
		current = current->next;
	}
	return (a);
}
