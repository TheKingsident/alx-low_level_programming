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

	prevNode = NULL;
	currentNode = *head;

	while (currentNode != NULL)
	{
		*head = currentNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = *head; }

	*head = prevNode;
	return (*head);

}

