#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars and initializes with a specific cha
 *
 * @size: Size
 *
 * @c: char to initialize the array with
 *
 * Return: The resultant array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;

	if (size != 0)
	{
		arr = malloc(sizeof(char) * size);

		if (arr == NULL)
		{
			fprintf(stderr, "Not enough memory left!\n");
			return (NULL); }

		while (i < size)
		{
			arr[i] = c;
			i++; }

		return (arr); }

	return (NULL);
}
