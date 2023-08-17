#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *
 * @head: Pointer to the head node
 * @n: Value to assign in new node
 * Return: Address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *currentNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	currentNode = *head;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}

		currentNode->next = newNode;
		newNode->prev = currentNode;
	}

	return (newNode);

}
