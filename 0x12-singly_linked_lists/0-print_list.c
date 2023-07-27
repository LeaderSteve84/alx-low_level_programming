#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - a function that returns the number of
 * elements in a linked list_t list.
 * @h: a pointer to array of struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
		}
	}
	return (nodes);
}
