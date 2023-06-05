#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a charcter in a string
 *
 * @s: String to search
 *
 * @c: Character to locate
 *
 * Return: Pointer to found character of NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;
	
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
	       	}

		i++; }
	
	return (NULL);
}
