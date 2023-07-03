#include "lists.h"

/**
 * free_list - Frees us a list
 * @head: The address of the head node
 */
void free_list(list_t *head)
{
	list_t *currentNode;
	list_t *next;

	currentNode = head;

	while (currentNode != NULL)
	{
		next = currentNode->next;
		free(currentNode->str);
		free(currentNode);
		currentNode = next;
	}
}
