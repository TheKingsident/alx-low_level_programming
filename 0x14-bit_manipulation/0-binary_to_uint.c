#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string of 0 and 1 characters.
 *
 * Return: The converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convertedVal;
	int stringCount;
	int i;

	if (b == NULL)
	{
		return (0); }

	convertedVal = 0;
	stringCount = strlen(b);

	for (i = 0; i < stringCount; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0); }

		convertedVal = convertedVal << 1;
		convertedVal |= (b[i] - '0'); }

	return (convertedVal);

}
