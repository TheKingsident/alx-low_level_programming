#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
{	putchar(alphabet[i]); }

	putchar('\n');

	return (0);
}
