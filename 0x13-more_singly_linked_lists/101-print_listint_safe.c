#include "lists.h"

/**
 * print_listint_safe - Prints the content of a list
 * @head: The pointer to the head node
 * Return: The node count
 */
size_t print_listint_safe(const listint_t *head)
{

	const listint_t *currentNode;
	const listint_t *checkingNode;
	size_t nodeCount;
	int loop;

	currentNode = head;
	checkingNode = head;
	nodeCount = 0;
	loop = 0;

	while (currentNode != NULL)
	{
		if (loop && checkingNode == currentNode)
		{
			printf("-> [%p] %d\n", (void *)currentNode, currentNode->n);
			return (nodeCount); }

		printf("[%p] %d\n", (void *)currentNode, currentNode->n);
		nodeCount++;

		if (checkingNode != NULL && checkingNode->next != NULL)
		{
			checkingNode = checkingNode->next->next;
			currentNode = currentNode->next;
			loop = 1; }
		else
		{
			currentNode = currentNode->next;
			loop = 0;
		}
	}

	return (nodeCount);

}
