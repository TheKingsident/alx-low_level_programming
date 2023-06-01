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
    int destLength = 0;
    int i = 0;

    while (dest[destLength] != '\0')
    {
        destLength++;
    }

    while (src[i] != '\0' && i < n)
    {
        dest[destLength + i] = src[i];
        i++;
    }

    dest[destLength + i] = '\0';

    return (dest);
}
