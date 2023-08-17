#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *
 * @head: Pointer to the head node of the list
 * @index: Position
 * Return: Address to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *currentNode;
	unsigned int count;

	currentNode = head;
	count = 0;

	while (currentNode != NULL)
	{
		if (count == index)
		{
			return (currentNode);
		}

		currentNode = currentNode->next;
		count++;

	}

	return (NULL);
}
