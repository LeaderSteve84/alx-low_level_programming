#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @value: the value associated with the key.
 * @key: the key.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value2;
	unsigned long int index, x;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	value2 = strdup(value);
	if (value2 == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = value2;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value2);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value2;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
