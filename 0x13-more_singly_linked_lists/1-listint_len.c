#include "lists.h"

/**
 * listint_len - Returns the number of nodes in a list
 * @h: Address to the list node
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *currentNode;
	size_t elementCount;

	currentNode = h;
	elementCount = 0;

	while (currentNode != NULL)
	{
		elementCount++;

		currentNode = currentNode->next;
	}

	return (elementCount);

}
