#include "search_algos.h"
#include <math.h>

/**
 * exponential_search - Searches for a value using the Exponential S.A.
 * @array: Pointer to the start of the array
 * @size: Number of elements in the array
 * @value: The value to look for
 * Return: index where value is found, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left;
	size_t right;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		return (0);
	}

	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}


	left = i / 2;
	right = (i < size) ? i : size - 1;

	return (hlp_bin_srch(array, left, right, value));
}

/**
 * hlp_bin_srch - helper function to perform binary search
 * @array: Pointer to the start of the array
 * @left: starting index for the search
 * @right: ending index for the search
 * @value: value to look for
 * Return: first index where value is found, or -1 if not found
 */
int hlp_bin_srch(int *array, size_t left, size_t right, int value)
{
	while (left <= right)
	{
		size_t i;

		size_t mid = left + (right - left) / 2;

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");

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
