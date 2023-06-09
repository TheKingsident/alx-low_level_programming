#include <stdio.h>
/**
 * main - Main function
 *
 * @argc: Argument counter
 *
 * @argv: Argument vector
 *
 * Return: Always 0 for successful completion
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]); }

	return (0);
}
