#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to extract the bit.
 * @index: The index of the bit to retrieve, starting from 0.
 *
 * Return: The value of the bit at the given index, or -1
 * if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int holder;

	holder = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & holder) == 0)
		return (0);

	return (1);

}
