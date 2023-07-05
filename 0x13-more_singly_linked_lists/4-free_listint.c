#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: The address of the head node
 */
void free_listint(listint_t *head)
{
	listint_t *currentNode;
	listint_t *next;

	currentNode = head;

	while (currentNode != NULL)
	{
		next = currentNode->next;
		free(currentNode);

		currentNode = next;
	}

}

