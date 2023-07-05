#include "lists.h"

/**
 * *add_nodeint_end - Adds a node at the end of a list
 * @head: Address of the head node
 * @n: The int data
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current;


	newNode = malloc(sizeof(listint_t));
	current = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newNode;
	}

	return (newNode);
}
