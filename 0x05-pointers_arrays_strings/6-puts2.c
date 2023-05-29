#include "main.h"
/**
 * puts2 - Prints every other character of a string
 *
 * @str: the string
 *
 */
void puts2(char *str)
{
	int i;
	int j;

	j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]); }
		else
		{
			j++; }
	}

	_putchar('\n');

}
