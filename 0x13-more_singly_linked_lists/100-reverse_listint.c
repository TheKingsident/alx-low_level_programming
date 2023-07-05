#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to the head node of the list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode;
	listint_t *currentNode;
	listint_t *nextNode;

	prevNode = NULL;
	currentNode = *head;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		currentNode->next = preNode;
		prevNode = currentNode;
		currentNode = nextNode; }

	*head = prevNode;
	return (*head);

}

