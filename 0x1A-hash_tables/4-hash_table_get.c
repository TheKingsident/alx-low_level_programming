#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: The hash table to check
 * @key: The key whose value to retrieve
 *
 * Return: The value, NULL if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *currentNode;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	currentNode = ht->array[index];

	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			return (currentNode->value);
		}

		currentNode = currentNode->next;
	}

	return (NULL);

}
