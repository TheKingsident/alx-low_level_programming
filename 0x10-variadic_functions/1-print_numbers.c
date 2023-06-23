#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers from arguments on a line
 * @separator: The character that separates the numbers
 * @n: number of mumbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			int num = va_arg(numbers, int);

			if (i != (n - 1))
			{
				printf("%d%s", num, separator); }

			else
			{
				printf("%d\n", num); }

		}

	}

	else if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int num = va_arg(numbers, int);

			printf("%d", num);

			if (i != (n - 1))
			{
				printf("%s", separator); }
			}

		printf("\n"); }

	va_end(numbers);

}
