#include "main.h"


/**
 *print_most_numbers - Prints numbers to console
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{	int i;
	char mostNumbers[] = "01356789";

	for (i = 0; mostNumbers[i] != '\0'; i++)
	{
		_putchar(mostNumbers[i]); }

	_putchar('\n');

}
