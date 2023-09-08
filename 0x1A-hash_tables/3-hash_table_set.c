#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: The hash table to add the element
 * @key: The key to be assigned
 * @value: The value to assign to the key
 * Return: 1 if element is added, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newElement;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0); }
	index = key_index((unsigned char *)key, ht->size);
	newElement = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newElement ==  NULL)
	{
		return (0); }
	newElement->key = strdup(key);
	if (newElement->key == NULL)
	{
		free(newElement);
		return (0); }
	newElement->value = strdup(value);
	if (newElement->value == NULL)
	{
		free(newElement->key);
		free(newElement);
		return (0); }
	newElement->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = newElement; }
	else
	{
		hash_node_t *currentElement;

		currentElement = ht->array[index];

		while (currentElement != NULL)
		{
			currentElement = currentElement->next; }
		currentElement->next = newElement; }

	return (1);

}
