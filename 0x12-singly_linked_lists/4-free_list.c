#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that frees a list_t list.
 * @head: a pointer head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
