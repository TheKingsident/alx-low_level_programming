#include "lists.h"

/**
 * add_node - Adds a new node to a list
 * @head: Address of the head node
 * @str: The string data
 * Return: The address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *newNode;

	newNode = malloc(sizeof(struct list_s));

	if (newNode == NULL)
	{
		return (NULL); }

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);

}
