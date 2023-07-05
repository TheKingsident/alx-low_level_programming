#include "lists.h"

/**
 * add_nodeint - Adds a new node to a list
 * @head: Address of the head node
 * @n: The int data
 * Return: The address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);

}
