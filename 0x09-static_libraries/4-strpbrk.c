#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches for a string for any set of bytes
 *
 * @s: String to search
 *
 * @accept: set of bytes to search for
 *
 * Return: The match or NULL if it doesn't exist
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]); }
		}
	}

	return (NULL);

}
