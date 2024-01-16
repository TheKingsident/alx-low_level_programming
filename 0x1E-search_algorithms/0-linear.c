#include "search_algos.h"

/**
 * linear_search - searches for a value using the Linear search algorithm
 * @array: Pointer to array to search in
 * @size: Size of the array
 * @value: The value to search
 * Return: -1 if NULL or not found, index if found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);

}
