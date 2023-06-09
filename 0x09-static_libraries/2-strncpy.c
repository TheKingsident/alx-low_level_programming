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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i]; }

	for (; i < n; i++)
	{
		dest[i] = '\0'; }


	return (dest);
}
