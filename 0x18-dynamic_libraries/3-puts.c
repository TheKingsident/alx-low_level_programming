#include "main.h"
/**
 * _puts - Displays some characters to console
 *
 * @str: Characters to display
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]); }

	_putchar('\n');

}
