#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to be flipped
 *              to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int result;
	unsigned int count;

	result = n ^ m;
	count = 0;

	while (result != 0)
	{
		count += result & 1;
		result >>= 1; }


	return (count);

}
