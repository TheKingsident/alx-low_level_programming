#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks if a character is lowercase
 *
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return 1;
		_putchar('+'); }

	else if (n < 0)
	{
		return -1;
		_putchar('-'); }


	else
	{
		return 0;
		_putchar('0'); }

}
