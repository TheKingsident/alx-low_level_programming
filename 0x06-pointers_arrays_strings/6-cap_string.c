#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 *
 * @str: The string to modify
 *
 * Return: The result
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (i == 0 || !((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
                           (str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
                           (str[i - 1] >= '0' && str[i - 1] <= '9')))
            {
                str[i] = str[i] - ('a' - 'A');
            }
        }

		i++; }

	return (str);

}
