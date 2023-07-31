#include "lists.h"
/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list
 * @h: a pointer with a data type listint_t
 * and also a constant
 * Return: the number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		count_elements++;
	}
	return (count_elements);
}
