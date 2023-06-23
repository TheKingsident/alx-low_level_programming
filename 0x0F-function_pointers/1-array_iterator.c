#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter on
 * each element of an array.
 *
 * @array: The array
 *
 * @size: The size
 *
 * @action: Pointer to function doing the heavy lifting
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++; }
	}

}
