#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet x 10 to console
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{	int i;
	int j = 0;
	char smallalphabet[] = "abcdefghijklmnopqrstuvwxyz";

	while (j < 10)
{
	for (i = 0; smallalphabet[i] != '\0'; i++)
	{	_putchar(smallalphabet[i]); }

	_putchar('\n');

	j++; }

}
