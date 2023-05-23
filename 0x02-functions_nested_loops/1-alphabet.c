#include "main.h"


/**
 * print_alphabet - Prints alphabet to console
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{	int i;
	char something[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; something[i] != '\0'; i++)
{	_putchar(something[i]); }

	_putchar('\n');


}
