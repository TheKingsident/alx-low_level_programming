#include "main.h"
#include <stdlib.h>
/**
 * _strncpy - Copies the string in src into dest
 *
 * depending on n number of bytes
 *
 * @src: the string to copy
 *
 * @dest: destination to copy into
 *
 * @n: number of bytes
 *
 * Return: the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		if(src[i] != '\0')
			
			dest[i] = src[i];

		else
			dest[i] = '\0';	}

	return (dest);
}
