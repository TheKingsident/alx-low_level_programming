#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: Table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	int flag;
	unsigned long int size;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	flag = 1;
	printf("{");

	size = ht->size;

	for (i = 0; i < size; i++)
	{
		hash_node_t *currentNode;

		currentNode = ht->array[i];

		while (currentNode != NULL)
		{
			if (!flag)
				printf(", ");
			printf("'%s': '%s'", currentNode->key, currentNode->value);
			flag = 0;
			currentNode = currentNode->next;
		}

	}
	printf("}\n");

}
