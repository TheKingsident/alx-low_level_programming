#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if a character is lowercase
 *
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return 1; }
	else
	{
		return 0; }
}
