#include "hash_tables.h"

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

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (!ht || !key || !*key || !value)
		return (0);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *newNode;

	newNode = shash_node_create(key, value);
    if (!newNode)
		return (0);

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

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	if (!ht || !key || !*key)
		return (NULL);

	unsigned long int index;
	shash_node_t *current

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

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		shash_node_t *current = ht->array[i];
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
