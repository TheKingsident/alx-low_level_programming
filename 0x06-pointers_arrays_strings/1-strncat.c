#include "main.h"
#include <stdlib.h>
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
	char *result;

	while (dest[i] != '\0')
	{
		destLength++;
		i++; }

	result = (char *)malloc((destLength + n + 1) * sizeof(char));

	for (i = 0; i < destLength; i++)
	{
		result[i] = dest[i]; }

	for (k = destLength, l = 0; l < n && src[l] != '\0'; k++, l++)
	{
		result[k] = src[l]; }

	result[k] = '\0';


	return (result);
}
