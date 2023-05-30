#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
/**
 * _atoi - Convert a string to an integer
 *
 * @s: Characters to convert
 *
 * Return: the results
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			sign = -sign;
		i++; }

	
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			fprintf(stderr, "Integer overflow detected.\n");
			return 0; }
		
		result = result * 10 + (s[i] - '0');
		i++; }
	
	return (sign * result);
}
