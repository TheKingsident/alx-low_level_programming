#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all in the parameters
 *
 * @n: The number of paraemeters
 *
 * Return: The calculated sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list values;

	sum = 0;

	va_start(values, n);

	if (n == 0)
	{
		return (0); }

	for (i = 0; i < n; i++)
	{
		int num = va_arg(values, int);

		sum += num; }

	return (sum);

}
