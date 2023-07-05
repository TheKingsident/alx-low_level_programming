#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: pointer to the head node
 * @idx: is the index of the list where the new node should be
 * added. Index starts at 0
 * @n: int data for new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentNode;
	listint_t *newNode;
	unsigned int nodeIndex;

	currentNode = *head;
	nodeIndex = 0;

	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));

		if (newNode == NULL)
		{
			return (NULL); }
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}
	while (currentNode != NULL && nodeIndex < (idx - 1))
	{
		currentNode = currentNode->next;
		nodeIndex++; }

	if (currentNode == NULL || currentNode->next == NULL)
	{
		return (NULL); }
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL); }
	newNode->n = n;
	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}
