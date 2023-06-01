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
		if ((str[i] == ',' || str[i] == ' ' || str[i] == '\n' || str[i]
				== ';' || str[i] == '.' || str[i] == '!' ||
				str[i] == '?' || str[i] == '"' || str[i] ==
				'(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}' || str[i] == '\t') &&
				(str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - ('a' - 'A'); }

		else
			{
				str[i] = str[i]; }

		i++; }

	return (str);

}
