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
            if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
                str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
                str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
                str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
                str[i - 1] == '{' || str[i - 1] == '}')
            {
                str[i] = str[i] - ('a' - 'A');
            }
        }  

		i++; }

	return (str);

}
