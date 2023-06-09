#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int j;
	int sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			while (argv[i][j] != '\0')
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");

					return (1); }

				j++; }

			sum += atoi(argv[i]); }
	}

	printf("%d\n", sum);

	return (0);
}
