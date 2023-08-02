#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer to a pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	/*check if head is empty*/
	if (head == NULL)
		return;
	/*initiate iteration loop*/
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;/*set head to NULL*/
}
