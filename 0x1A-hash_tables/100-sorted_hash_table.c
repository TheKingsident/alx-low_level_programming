#include "hash_tables.h"

/**
 * shash_node_create - Create a new shash_node_t.
 * @key: The key to add to the node
 * @value: The value to add to the node
 *
 * Return: A pointer to the newly created shash_node_t, or NULL on failure
 */
shash_node_t *shash_node_create(const char *key, const char *value)
{
	shash_node_t *newNode;

	newNode = malloc(sizeof(shash_node_t));
	if (!newNode)
		return (NULL);

	newNode->key = strdup(key);
	if (!newNode->key)
	{
		free(newNode);
		return (NULL);
	}

	newNode->value = strdup(value);
	if (!newNode->value)
	{
		free(newNode->key);
		free(newNode);
		return (NULL);
	}

	newNode->next = NULL;
	newNode->sprev = NULL;
	newNode->snext = NULL;

	return (newNode);
}

/**
 * shash_table_create - Create a sorted hash table.
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created shash_table_t, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	memset(ht->array, 0, sizeof(shash_node_t *) * size);
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Insert a key-value pair into the sorted hash table.
 * @ht: The hash table to insert into
 * @key: The key to insert
 * @value: The value to insert
 *
 * Return: 1 if successful, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *newNode;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newNode = shash_node_create(key, value);
	if (!newNode)
	{
		return (0);
	}

	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	if (!ht->shead)
	{
		ht->shead = newNode;
		ht->stail = newNode;
	}
	else
	{
		shash_node_t *current = ht->shead;
		shash_node_t *prev = NULL;

		while (current && strcmp(key, current->key) >= 0)
		{
			prev = current;
			current = current->snext;
		}

		if (!prev)
		{
			newNode->snext = ht->shead;
			ht->shead->sprev = newNode;
			ht->shead = newNode;
		}
		else
		{
			prev->snext = newNode;
			newNode->sprev = prev;

			if (current)
			{
				newNode->snext = current;
				current->sprev = newNode;
			}
			else
			{
				ht->stail = newNode;
			}
		}
	}

	return (1);
}

/**
 * shash_table_get - Retrieve a value associated with a key
 * from the sorted hash table.
 * @ht: The hash table to search
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table.
 * @ht: The hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	int flag = 1;
	shash_node_t *current;

	current = ht->shead;

	if (!ht)
		return;

	printf("{");
	while (current)
	{
		if (!flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 0;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order.
 * @ht: The hash table to print in reverse order
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int flag = 1;
	shash_node_t *current;

	current = ht->stail;

	if (!ht)
		return;

	printf("{");
	while (current)
	{
		if (!flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 0;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table and its contents.
 * @ht: The hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		shash_node_t *current;

		current	= ht->array[i];

		while (current)
		{
			shash_node_t *temp;

			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
