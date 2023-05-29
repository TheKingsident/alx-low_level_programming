#include "main.h"
/**
 * puts_half - Displays half of the characters in a string
 *
 * @str: Characters to display
 */
void puts_half(char *str)
{
	int length;
	int i;

	length = 0;

	while (str[length] != '\0')
	{
		length++; }

	for (i = (length / 2); i <= length; i++)
	{
		_putchar(str[i]); }

	_putchar('\n');

}
