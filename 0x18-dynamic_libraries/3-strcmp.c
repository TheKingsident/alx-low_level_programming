#include "main.h"
/**
 * _strcmp - Function comppares two strings
 *
 * @s1: The first string
 *
 * @s2: The second string
 *
 * Return: Result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0); }
		i++;
	}

	return (s1[i] - s2[i]);
}
