#include "main.h"

/**
 * print_line - Prints lines n number times to console
 *
 * @n: number of times
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 0;
	int j;
	char line[] = "_";

	if (n <= 0)
	{
		_putchar('\n'); }
	else
	{
		while (i < n)
		{
			for (j = 0; line[j] != '\0'; j++)
			{
				_putchar(line[j]); }
			i++;
		}
		_putchar('\n'); }
	i = 0;
	j = 0;
}
