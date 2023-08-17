#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a
 * dlistint_t linked list.
 *
 * @head: Pointer to the head node of the list
 * Return: The sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	currentNode = head;
	sum = 0;

	while (currentNode != NULL)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}

	return (sum);

}
