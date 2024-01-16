#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left;
	size_t right;
	size_t mid;

	left = 0;
	right  = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array + left, right - left + 1);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", array[i]);
	}
	printf("\n");
}
