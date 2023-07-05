#include "lists.h"

/**
 * print_listint - Print the contents of a list
 * @h: Address to the list node
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeCount;
	const listint_t *headNode;

	nodeCount = 0;
	headNode = h;

	while (headNode != NULL)
	{
		printf("%d\n", headNode->n);

		nodeCount++;

		headNode = headNode->next;
	}

	return (nodeCount);
}
