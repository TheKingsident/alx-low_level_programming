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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s); }

		s++; }

	if (*s == c)
	{
		return (s); }

	return (NULL);
}
