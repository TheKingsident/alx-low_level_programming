#include "hash_tables.h"

/**
 * key_index - Craetes and return the key index
 * @key: The key
 * @size: Size of the table
 * Return: The index where the key will be stored in the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
