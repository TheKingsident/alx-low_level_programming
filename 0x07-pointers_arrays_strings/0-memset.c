#include "main.h"

/**
 * _memset - Fills the first n bytes of memory pointed to by s with a constant
 * byte b
 *
 * @n: Number of bytes
 *
 * @b: Constant byte to fill
 *
 * @s: Pointer
 *
 * Return: The result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b; }

	return (s);

}
