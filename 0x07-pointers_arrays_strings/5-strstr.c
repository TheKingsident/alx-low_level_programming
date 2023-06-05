#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates the first occurence of a subsring
 *
 * @haystack: String to search through
 *
 * @needle: String to locate
 *
 * Return: A pointer to the beginning of substring. NULL if exists not
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int needleLength;

	needleLength = 0;

	while (needle[needleLength] != '\0')

		needleLength++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; j < needleLength; j++)
			{
				if (haystack[i + j] != needle[j])

					break; }

			if (j == needleLength)

				return (&haystack[i]); }
	}

	return (NULL);

}
