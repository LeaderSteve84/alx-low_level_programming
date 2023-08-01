#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: a pointer of listint_t data type
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
	temp = current;
	current = current->next;
	free(temp);
	}
}
