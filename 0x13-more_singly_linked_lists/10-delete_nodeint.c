#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specified index
 * in a linked list
 * @head: Pointer to the head node of the list
 * @index: Index of the node to be deleted, starting from 0
 * Return: 1 if the deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode;
	listint_t *prevNode;
	unsigned int nodeIndex;

	if (*head == NULL)
	{
		return (-1); }

	if (index == 0)
	{
		currentNode = *head;
		*head = currentNode->next;
		free(currentNode);
		return (1); }

	prevNode = *head;
	currentNode = prevNode->next;
	nodeIndex = 1;

	while (currentNode != NULL)
	{
		if (nodeIndex == index)
		{
			prevNode->next = currentNode->next;
			free(currentNode);
			return (1); }

		prevNode = currentNode;
		currentNode = currentNode->next;
		nodeIndex++; }

	return (-1);

}
