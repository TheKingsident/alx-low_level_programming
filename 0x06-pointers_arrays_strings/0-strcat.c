#include "main.h"
/**
 * _strcat - Concatenates the string in src with the string in dest
 *
 * @src: the string to contenate
 *
 * @dest: the string to be concatenated with
 *
 * Return: the resultaant concatenanted string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;
	int l;
	int destLength = 0;
	int srcLength = 0;

	while(dest[i] != '\0')
	{
		destLength++;
       		i++; }

	while(src[j] != '\0')
	{
		srcLength++;
       		j++; }
	
	for (k = destLength, l = 0; (k < (destLength + srcLength)); k++, l++)
	{
		dest[k] = src[l]; }

	dest[destLength + srcLength] = '\0';

	return (dest);


}
