#include <stdio.h>
#include "3_main.h"

/**
 * _islower - checks if a character is lowercase
 *
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(char c)
{	int stat;

	if (c == 'c')
	{	stat = 1; }
	else
	{	stat = 0; }

	return (stat);
}
