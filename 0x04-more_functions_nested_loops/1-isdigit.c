#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if a character is lowercase
 *
 * @c: the digit to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{	return 1; }
	else
	{	return 0; }
}
