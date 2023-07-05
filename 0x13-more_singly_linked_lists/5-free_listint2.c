#include "lists.h"

/**
 * free_listint2 - Frees a list and sets the head to NULL
 * @head: The head node
 */
void free_listint2(listint_t **head)
{
	listint_t *currentNode;
	listint_t *next;

	currentNode = *head;

	while (currentNode != NULL)
	{
		next = currentNode->next;
		free(currentNode);

		currentNode = next;
	}

	*head = NULL;


}
