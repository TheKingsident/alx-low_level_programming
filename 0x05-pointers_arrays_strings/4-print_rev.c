#include "main.h"
/**
 * print_rev - Displays some characters to console in reverse
 *
 * @s: Characters to display
 */
void print_rev(char *s)
{
	int i;
	int j;
	int length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++; }

	for (j = length; j >= 0; j--)
	{
		_putchar(s[j]); }

}
