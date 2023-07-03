#include "lists.h"

/**
 * list_len - Returns the number of elements in a list
 * @h: Address to the list node
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t elementCount;
	const list_t *currentList;

	elementCount = 0;
	currentList = h;

	while (currentList != NULL)
	{
		elementCount++;
       		currentList = currentList->next;	}

	return (elementCount);
}
