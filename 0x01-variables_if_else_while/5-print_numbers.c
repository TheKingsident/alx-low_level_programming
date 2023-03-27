#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int numbers;
	numbers = 0;

	do {
	printf("%d", numbers);
	numbers++; }

	while (numbers < 10);

	printf("\n");

}
