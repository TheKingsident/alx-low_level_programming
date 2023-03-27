#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	char smallalphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char bigalphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;

	for (i = 0; smallalphabet[i] != '\0'; i++)
{	putchar(smallalphabet[i]); }

	for (i = 0; bigalphabet[j] != '\0'; j++)
{	putchar(bigalphabet[j]); }


	putchar('\n');

	return (0);
}
