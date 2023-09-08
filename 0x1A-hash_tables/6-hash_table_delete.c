#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		return;

	for (unsigned long int i = 0; i < ht->size; i++)
	{
		hash_node_t *currentNode;

		currentNode = ht->array[i];

		while (currentNode != NULL)
		{
			hash_node_t *temp;

			temp = currentNode;

			currentNode = currentNode->next;

			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
