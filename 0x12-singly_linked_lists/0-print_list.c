#include "lists.h"

/**
 * print_list - Print the contents of a list
 * @h: Address to the list node
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodeCount;
	const list_t *currentNode;

	nodeCount = 0;
	currentNode = h;

	while (currentNode != NULL)
	{
		if (currentNode->str == NULL)
		{
			printf("[0] (nil)\n"); }

		else
		{
			printf("[%lu] %s\n", currentNode->len, currentNode->str); }

		nodeCount++;
		currentNode = currentNode->next;
	}

	return (nodeCount);

}
