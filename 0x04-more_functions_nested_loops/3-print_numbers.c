#include "main.h"


/**
 * print_numbers - Prints numbers to console
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{	int i;
	char numbers[] = "123456789";

	for (i = 0; numbers[i] != '\0'; i++)
	{
		_putchar(numbers[i]); }

	_putchar('\n');

}
