#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to the head node of the list
 * @index: Index of the node to retrieve, starting from 0
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode;
	unsigned int nodeIndex;

	currentNode = head;
	nodeIndex = 0;

	while (currentNode != NULL)
	{
		if (nodeIndex == index)
		{
			return (currentNode);
		}
		currentNode = currentNode->next;
		nodeIndex++;
	}

	return (NULL);

}
