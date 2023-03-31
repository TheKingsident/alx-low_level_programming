#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet x 10 to console
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{	int i;
	int j = 10;
	char smallalphabet[] = "abcdefghijklmnopqrstuvwxyz";

	while (j != 0)
{
	for (i = 0; smallalphabet != '\0'; i++)
	{	putchar(smallalphabet[i]); }

	putchar('\n');

	j--; }

}
