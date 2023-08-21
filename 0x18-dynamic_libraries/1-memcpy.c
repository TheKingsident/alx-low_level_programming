#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 *
 * @n: Number of bytes
 *
 * @src: Memory area to copy
 *
 * @dest: Memory area to copy into
 *
 * Return: The result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]; }

	return (dest);


}
