#include "hash_tables.h"

/**
 * shash_table_create - function that creates a hash table.
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_t;
	unsigned long int x;

	hash_t = malloc(sizeof(shash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		hash_t->array[x] = NULL;
	hash_t->shead = NULL;
	hash_t->stail = NULL;

	return (hash_t);
}

/**
 * shash_table_set - Insert an item of the node to a sorted hash table
 * @ht: sorted hash table
 * @key: the key
 * @value: the value
 * Return: 0 if failed, 1 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *current;
	char *value2;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	value2 = strdup(value);
	if (value2 == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->shead;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value2;
			return (1);
		}
		current = current->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(value2);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value2);
		free(new);
		return (0);
	}
	new->value = value2;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		current = ht->shead;
		while (current->snext != NULL && strcmp(current->snext->key, key) < 0)
			current = current->snext;
		new->sprev = current;
		new->snext = current->snext;
		if (current->snext == NULL)
			ht->stail = new;
		else
			current->snext->sprev = new;
		current->snext = new;
	}

	return (1);
}


/**
 * shash_table_get - get a value associated with key
 * @ht: hash table
 * @key: the key
 * Return: NULL is key doesnot match. Otherwise,
 * the value associated with key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	node = ht->shead;

	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - print a sorted hash table in order
 * @ht: hash table
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf(" '%s' : '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print a sorted hash table in reverse order
 * @ht: hash table
 * Return: Nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf(" '%s' : '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that delete a sorted hash table
 * @ht: hash table
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *current;

	if (ht == NULL)
	{
		return;
	}
	node = ht->shead;
	while (node)
	{
		current = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = current;
	}
	free(head->array);
	free(head);
}
