#include "lists.h"

/**
 * pop_listint - Deletes the head node and returns the head data
 * @head: Pointer to the head node
 * Return: The data stored in the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *currentNode;
	int headData;

	if (*head == NULL)
	{
		return (0);
	}

	currentNode = *head;
	headData = currentNode->n;
	*head = currentNode->next;

	free(currentNode);

	return (headData);


}
