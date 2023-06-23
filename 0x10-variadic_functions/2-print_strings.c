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
	if (separator != NULL && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			char *name = va_arg(names, char*);

			if (name == NULL)
			{
				printf("(nil)"); }
			else
			{
				printf("%s", name); }
			if (i != (n - 1))
			{
				printf("%s", separator); }
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			char *name = va_arg(names, char*);

			if (name == NULL)
			{
				printf("(nil)"); }
			else
			{
				printf("%s", name); }
			if (i != (n - 1))
			{
				printf(" "); }
		}
	}
	printf("\n");
	va_end(names);
}
