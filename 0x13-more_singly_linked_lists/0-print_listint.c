#include "lists.h"
/**
 * print_listint - a function that prints all the elements
 * of a listint_t list.
 * @h: a pointer to listint_t data type
 * Return: the number of nodes counts
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_nodes++;
	}
	return (count_nodes);
}
