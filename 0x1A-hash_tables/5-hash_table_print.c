#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int x;
	unsigned char cf;

	cf = 0;
	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (cf == 1)
				printf(", ");
			node = ht->array[x];
			while (node != NULL)
			{
				printf(" '%s': '%s'", node->key, node->value);
				node = node->next;
				printf(", ");
			}
			cf = 1;
		}
	}
	printf("}\n");
}
