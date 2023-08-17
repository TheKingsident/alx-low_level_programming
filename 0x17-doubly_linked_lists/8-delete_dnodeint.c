#include "lists.h"

#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 *
 * @head: Pointer to the head node
 * @index: Index of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *currentNode;
	unsigned int currentNodeCount;

	if (*head == NULL)
	{
		return (-1); }


	currentNode = *head;
	currentNodeCount = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL; }

		free(currentNode);
		return (-1);
	}
	while (currentNode != NULL && currentNodeCount < index)
	{
		currentNode = currentNode->next;
		currentNodeCount++; }
	if (currentNode != NULL)
	{
		if (currentNode->next != NULL)
		{
			currentNode->next->prev = currentNode->prev; }
		if (currentNode->prev != NULL)
		{
			currentNode->prev->next = currentNode->next; }
		free(currentNode);
		return (1); }

	return (-1);
}
