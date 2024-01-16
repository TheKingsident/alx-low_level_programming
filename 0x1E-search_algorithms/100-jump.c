#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value using the Jump search algorithm
 * @array: Array to search
 * @size: Size of array
 * @value: Value to search
 * Return: index where value is located, or -1 if not found or array is NULL
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t step;
	size_t previous;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	step = sqrt(size);
	previous = 0;
	jump = sqrt(size);

	while (previous < size && array[previous] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", previous, array[previous]);
		step = previous + jump;
		if (step >= size || array[step] >= value)
		{
			break;
		}
		previous = step;

	}

	printf("Value found between indexes [%lu] and [%lu]\n", previous, step);
	for (i = previous; i < size && i <= step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);

}
