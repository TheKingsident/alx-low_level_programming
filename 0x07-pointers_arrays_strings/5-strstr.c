#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates the first occurence of a subsring
 *
 * @haystack: String to search through
 *
 * @needle: String to locate
 *
 * Return: A pointer to the beginning of substring. NULL if exists not
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	
	for (i = 0; haystack[i] != '\0'; i++)
    {
       
        if (haystack[i] == needle[0])
        {
            
            for (j = 0; needle[j] != '\0'; j++)
            {
                if (haystack[i + j] != needle[j])
                    break;
            }

            
            if (needle[j] == '\0')
                return &haystack[i];
        }
    }

	return (NULL);

}
