#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int i;
	int j;

	for (i = 0; i < 9; i++)
{	putchar(i + '0');
	putchar(',');
	putchar(' '); }

	putchar(9 + '0');
	return (0);
}
