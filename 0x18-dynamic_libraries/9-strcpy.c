#include "main.h"
#include <stdio.h>
/**
 * _strcpy - It copies string pointed by src
 *
 * @src: Characters to copy
 *
 * @dest: Destination to copy to
 *
 * Return: The dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
