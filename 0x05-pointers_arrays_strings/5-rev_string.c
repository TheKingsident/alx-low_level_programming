#include "main.h"
/**
 * rev_string - Reverses a string
 *
 * @s: Characters to reverse
 */
void rev_string(char *s)
{
	int i;
	int j;
	int k;
	int length;
	char reversed_string;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++; }

	for (k = 0, j = length - 1; k < j; k++, j--)
	{
		reversed_string = s[k];
		s[k] = s[j];
		s[j] = reversed_string;	}

}
