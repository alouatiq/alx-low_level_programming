#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
	* shash_table_create - Creates a sorted hash table.
	* @size: The size of the array.
	*
	* Return: A pointer to the newly created sorted hash table, or NULL on failure.
	*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
	return (NULL);

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
	free(table);
	return (NULL);
	}

	for (i = 0; i < size; i++)
	table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
	* shash_table_set - Adds or updates an element in the sorted hash table.
	* @ht: The sorted hash table to add or update the key/value to.
	* @key: The key (cannot be an empty string).
	* @value: The value associated with the key (must be duplicated).
	*
	* Return: 1 if it succeeded, 0 otherwise.
	*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
	return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
	if (strcmp(temp->key, key) == 0)
	{
	free(temp->value);
	temp->value = value_copy;
	return (1);
	}
	temp = temp->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
	free(value_copy);
	return (0);
	}
	new_node->key = strdup(key);
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* Insert into the sorted linked list */
	if (ht->shead == NULL)
	{
	new_node->sprev = NULL;
	new_node->snext = NULL;
	ht->shead = new_node;
	ht->stail = new_node;
	}
	else
	{
	shash_node_t *current = ht->shead;

	while (current && strcmp(current->key, key) < 0)
	current = current->snext;

	if (current == NULL)
	{
	/* Insert at the end */
	new_node->sprev = ht->stail;
	new_node->snext = NULL;
	ht->stail->snext = new_node;
	ht->stail = new_node;
	}
	else
	{
	/* Insert before current */
	new_node->snext = current;
	new_node->sprev = current->sprev;
	if (current->sprev)
	current->sprev->snext = new_node;
	else
	ht->shead = new_node;
	current->sprev = new_node;
	}
	}

	return (1);
}

/**
	* shash_table_get - Retrieves a value associated with a key.
	* @ht: The sorted hash table to look into.
	* @key: The key to find.
	*
	* Return: The value associated with the key, or NULL if not found.
	*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
	if (strcmp(node->key, key) == 0)
	return (node->value);
	node = node->next;
	}

	return (NULL);
}

/**
	* shash_table_print - Prints the sorted hash table.
	* @ht: The sorted hash table to print.
	*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
	return;

	printf("{");
	node = ht->shead;
	while (node)
	{
	if (!first)
	printf(", ");
	printf("'%s': '%s'", node->key, node->value);
	first = 0;
	node = node->snext;
	}
	printf("}\n");
}

/**
	* shash_table_print_rev - Prints the sorted hash table in reverse order.
	* @ht: The sorted hash table to print.
	*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
	return;

	printf("{");
	node = ht->stail;
	while (node)
	{
	if (!first)
	printf(", ");
	printf("'%s': '%s'", node->key, node->value);
	first = 0;
	node = node->sprev;
	}
	printf("}\n");
}

/**
	* shash_table_delete - Deletes a sorted hash table.
	* @ht: The sorted hash table to delete.
	*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
	return;

	node = ht->shead;
	while (node)
	{
	temp = node->snext;
	free(node->key);
	free(node->value);
	free(node);
	node = temp;
	}

	free(ht->array);
	free(ht);
}
