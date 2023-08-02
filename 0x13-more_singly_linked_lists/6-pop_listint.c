#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: a pointer to a pointer of lisint_t data type
 * Return: an int value
 */
int pop_listint(listint_t **head)
{
	int head_node_data;
	listint_t *head_node;

	{
		if (head == NULL || *head == NULL)
		{
			return (0); /* Return 0 if the list is empty*/
		}

	head_node = *head;/* store the head_node */
	head_node_data = head_node->n;/*store the data from the head_node*/
	/*update the *head to the addree of the next node*/
	*head = head_node->next;
	/*delete the head node and return it data*/
	free(head_node);
	}
	return (head_node_data);
}
