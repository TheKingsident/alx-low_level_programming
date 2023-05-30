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

	while (s[i] && (s[i]  < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++; }


	if (s[i] && s[i] == '2' && s[i + 1] && s[i + 1] == '1' && s[i + 2] && s[i + 2] == '4' && s[i + 3] && s[i + 3] == '7' && s[i + 4] && s[i + 4] == '4' && s[i + 5] && s[i + 5] == '8' && s[i + 6] && s[i + 6] == '3' && s[i + 7] && s[i + 7] == '6' && s[i + 8] && s[i + 8] == '4' && s[i + 9] && s[i + 9] == '8')
	{
		result = INT_MIN;
		i += 10; }



	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && (s[i] - '0') > (INT_MAX % 10)))
		{
			fprintf(stderr, "Integer overflow detected.\n");
			return 0; }
		
		result = result * 10 + (s[i] - '0');
		i++; }
	
	return (sign * result);
}
