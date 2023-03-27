#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	char tebahpla[] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; tebahpla[i] != '\0'; i++)
{	putchar(tebahpla[i]); }

	putchar('\n')

	return (0);
}
