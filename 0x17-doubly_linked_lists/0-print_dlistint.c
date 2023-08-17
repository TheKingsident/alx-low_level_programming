#include "lists.h"


/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 *
 * @h: Pointer to the head node
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{

	const dlistint_t *currentNode;
	int count;

	currentNode = h;
	count = 0;

	while (currentNode != NULL)
	{
		printf("%d\n", currentNode->n);
		currentNode = currentNode->next;
		count++;
	}


	return (count);

}
