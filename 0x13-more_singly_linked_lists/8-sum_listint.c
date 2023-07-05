#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of linked list.
 * @head: Pointer to the head node of the list
 *
 * Return: Sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *currentNode;
	int sum;

	currentNode = head;
	sum = 0;

	if (currentNode == NULL)
	{
		return (0);
	}

	while (currentNode != NULL)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}

	return (sum);

}
