#include "main.h"
/**
 * leet - A function that encodes a string into 1337
 *
 * @str: stings to encode
 *
 * Return: The results
 */
char *leet(char *str)
{
	int i;
	int j;
	char *letters;
	char *leet_numbs;

	letters = "aAeEoOtTlL";
	leet_numbs = "4433007711";
	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_numbs[j];
				break; }
		}
	}

	return (str);

}
