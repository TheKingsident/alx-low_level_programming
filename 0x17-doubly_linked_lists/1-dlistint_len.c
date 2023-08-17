#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 *
 * @h: Pointer to the head node
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *currentNode;
	int count;

	currentNode = h;
	count = 0;

	while (currentNode != NULL)
	{
		count++;
		currentNode = currentNode->next;
	}

	return (count);


}
