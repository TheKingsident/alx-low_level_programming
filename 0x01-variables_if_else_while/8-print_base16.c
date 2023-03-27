#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int onum;
	char oalpha[] = "abcdef";
	int i;

	for (onum = 0; onum < 10; onum++)
{	putchar(onum + '0'); }

	for (i = 0; oalpha[i] != '\0'; i++)
{	putchar(oalpha[i]); }

	putchar('\0');

	return (0);
}
