#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 * @h: a pointer to the head
 * Return:  the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t nodes_num = 0;/* initialization of size_t of nodes */

	while (h != NULL)
	{
		h = h->next; /*iterate through the nodes */
		nodes_num++; /* node number s captured */
	}
	return (nodes_num);
}
