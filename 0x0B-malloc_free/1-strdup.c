#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - This returns a pointer to a newly allocated space in memory
 *
 * which contains a copy of the string given as a parameter.
 *
 * @str: The string
 *
 * Return: Pointer to new string
 */
char *_strdup(char *str)
{
	char *allocStr;
	int lenStr;
	int i;

	lenStr = 0;

	while (str[lenStr] != '\0')
	{
		lenStr++; }

	allocStr = malloc(sizeof(char) * (lenStr + 1));

	if (allocStr == NULL)
	{
		fprintf(stderr, "Not enough memory left!\n");
		return (NULL); }

	for (i = 0; i <= lenStr; i++)
	{
		allocStr[i] = str[i]; }

	return (allocStr);
}
