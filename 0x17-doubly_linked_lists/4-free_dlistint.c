#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: Pointer to head node of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;
	dlistint_t *temp;

	currentNode = head;

	while (currentNode != NULL)
	{
		temp = currentNode;
		currentNode = currentNode->next;
		free(temp);
	}

}
