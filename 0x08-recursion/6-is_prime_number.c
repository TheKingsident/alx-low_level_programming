#include "main.h"
/**
 * is_prime_number - The function Makes the return
 *
 * @n: The number
 *
 * is_prime_recursive - The function Makes the return
 *
 * @divisor: Divisor
 *
 * Return: Prime or not
 */

int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0); }

	if (divisor * divisor > n)
	{
		return (1); }

	if (n % divisor == 0)
	{
		return (0); }

	return (is_prime_recursive(n, divisor + 1));
}

int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}


