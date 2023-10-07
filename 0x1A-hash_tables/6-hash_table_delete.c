#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht:  the hash table
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *current;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			node = ht->array[x];
			while (node != NULL)
			{
				current = node->next;
				free(node->key);
				free(node->value);
				free(node);

				node = current;
			}
		}
	}
	free(head->array);
	free(head);
}
