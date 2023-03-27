#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int numbers =  0123456789;
	int digit;

	while (numbers > 0)
{	digit = numbers % 10;
	numbers /= 10;
	putchar(digit = '0');
}
	putchar('\0');

	return (0);
}
