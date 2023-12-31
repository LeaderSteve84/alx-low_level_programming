#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of
 * a dlistint_t list.
 * @h: pointer to the first node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t a = 0;

	current = h;

	while (current != NULL)
	{
		a++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (a);
}
