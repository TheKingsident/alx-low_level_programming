#include "main.h"
/**
 * _strlen - Calculates the length of a string
 *
 * @s: string
 *
 * Return: The length of the string passed
 */
int _strlen(char *s)
{
	int i;
	int length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{	length++; }

	return (length);

}
