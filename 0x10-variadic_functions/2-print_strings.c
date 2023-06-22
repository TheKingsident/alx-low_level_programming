#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings from arguments on a line
 * @separator: The character that separates the numbers
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list names;

	va_start(names, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			char *name = va_arg(names, char*);

			if (name == NULL)
			{
				printf("nil");
			}
			else
			{

				if (i != (n - 1))
				{
					printf("%s%s", name, separator);
				}

				else
				{
					printf("%s\n", name);
				}
			}
		}
	}
	va_end(names);
}
