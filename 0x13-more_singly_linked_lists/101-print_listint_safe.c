#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{

	const listint_t *currentNode;
	const listint_t *checkingNode;
	size_t nodeCount;

	currentNode = head;
	checkingNode = head;
	nodeCount = 0;

	while (currentNode != NULL)
	{
		printf("[%p] %d\n", (void *)currentNode, currentNode->n);
		nodeCount++;

		if (checkingNode != NULL && currentNode != NULL)
		{
			checkingNode = checkingNode->next->next;
			currentNode = currentNode->next; }
		else
		{
			currentNode = currentNode->next;
		}

		if (checkingNode == currentNode)
		{
			printf("-> [%p] %d\n", (void *)currentNode, currentNode->n);
			exit(98);
		}
	}

	return (nodeCount);

}
