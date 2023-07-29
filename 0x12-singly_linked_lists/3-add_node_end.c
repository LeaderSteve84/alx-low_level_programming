#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new
 * node at the end of a list_t list.
 * @head: a pointer
 * @str: a string pointer
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node;
	size_t n;
	/*alloction of memory size to new_node*/
	new_node = malloc(sizeof(list_t));
	/*check if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);
	/*duplicate string literal to new_node*/
	new_node->str = strdup(str);

	/* for loop to get the size of size_t n */
	for (n = 0; str[n]; n++)
		; /* semi colon here is to take no action by the looping*/

	new_node->len = n; /* assigned n to len*/
	new_node->next = NULL; 
	/*[above line] since new node just created, pointer address is NULL*/
	current_node = *head; 
	/* [above line]assigned current_node to the null address in *head */
	/* at the above line both new_node and current_node pointer address are NULL */
	if (current_node == NULL) /* this condition is true*/
	{
		*head = new_node; /*new_node address is assigned to head */
	} /* current_node is left with NULL address*/
	else
	{
		while (current_node->next != NULL) /*this condition is true because*/
		       /*current_node will always come with a NUL address*/
			current_node = current_node->next; 
		/* current_node will be assigned*/
		/*with the address of the subsequent next current_node*/
		current_node->next = new_node; 
		/*[above line] the subsequent current_node will be assigned*/
		/*with the NULL address assigned to new_node*/
	}
	return (*head); /*return head that carries the address of the first node in series*/
}
