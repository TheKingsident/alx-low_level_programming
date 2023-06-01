#include "main.h"
/**
 * string_toupper - converts all lowercase letters to uppercase
 *
 * @str: The string to convert
 *
 * Return: the converted letters
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A'); }
		i++; }

	return (str);

}
