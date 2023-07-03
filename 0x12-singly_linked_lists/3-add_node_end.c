#include "lists.h"

/**
 * add_node_end - Adds the last node to a list
 * @head: Address of the head node
 * @str: The string data of the list node
 * Return: The addrss of the last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode;

	endNode	= malloc(sizeof(list_t));

	if (endNode == NULL)
	{
		return (NULL); }

	endNode->str = strdup(str);
	endNode->len = strlen(str);
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
	}

	else
	{
		list_t *temp;

		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = endNode;
	}

	return (endNode);

}
