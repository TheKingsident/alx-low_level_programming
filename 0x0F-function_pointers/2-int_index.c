#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 *
 * @array: The array
 *
 * @size: Size of the array
 *
 * @cmp: Pointer to the function
 *
 * Return: -1 If size is <= 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1); }

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i); }
	}

	return (-1);

}
