#include "main.h"
/**
 * _strncat - Concatenates the string in src with the string in 
 *
 * dest depending on n number of bytes
 *
 * @src: the string to contenate
 *
 * @dest: the string to be concatenated with
 *
 * @n: number of bytes
 *
 * Return: the resultaant concatenanted string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k;
	int l;
	int destLength = 0;

	while (dest[i] != '\0')
	{
		destLength++;
		i++; }

	for (k = destLength, l = 0; (k < (destLength + n)); k++, l++)
	{
		dest[k] = src[l]; }

	dest[destLength + n] = '\0';


	return (dest);
}
