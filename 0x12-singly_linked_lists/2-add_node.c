#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node -  a function that adds a new node
 * at the beginning of a list_t list.
 * @head: a pointer head
 * @str: string pointer
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	int length = 0;
	/*memory allocation to the declare variable 'current'*/
	current = malloc(sizeof(list_t));
	/* check if memory allocation is successful */
	if (current == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	current->len = length;
	current->str = strdup(str);
	current->next = *head; /*address in head is assigned to current*/
	*head = current; /* head is reassigned the address of current*/

	return (current);
}
