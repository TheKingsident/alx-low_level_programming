#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 *
 * @h: Pointer to th ehead node
 * @idx: position to insert node
 * @n: Value to assign new node
 * Return: Address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *currentNode;
	unsigned int currentNodeCount;


	if (idx == 0)
	{
		return (add_dnodeint(h, n)); }

	newNode = create_dnodeint(n);

	if (newNode == NULL)
	{
		return (NULL); }

	currentNode = *h;
	currentNodeCount = 0;

	while (currentNode != NULL && currentNodeCount < idx - 1)
	{
		currentNode = currentNode->next;
		currentNodeCount++; }
	if (currentNode != NULL)
	{
		newNode->next = currentNode->next;
		newNode->prev = currentNode;
		if (currentNode->next != NULL)
		{
			currentNode->next->prev = newNode; }
		currentNode->next = newNode; }
	else
	{
		free(newNode);
		return (NULL); }
	return (newNode);
}

/**
 * create_dnodeint - Creates a new doubly linked list node
 *
 * @n: Value to assign to the new node
 * Return: Address of the new node
 */
dlistint_t *create_dnodeint(int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL); }

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	return (newNode);
}
