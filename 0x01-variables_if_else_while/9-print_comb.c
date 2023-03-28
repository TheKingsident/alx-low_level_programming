#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int i;
	int j;
	char commaspace[] = ", ";

	for (i = 0; i < 100; i++)
{	putchar(i + '\0');
	for (j = 0; commaspace[j] != '\0'; j++)
	{	putchar(commaspace[j]); } }

	putchar('\n');
	return (0);
}
