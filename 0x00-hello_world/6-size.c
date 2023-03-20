#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: ", sizeof(char), " byte(s)\n");
	printf("Size of an int: ", sizeof(int), " byte(s)\n");
	printf("Size of a long long int: ", sizeof(long long int), " byte(s)\n");
	printf("Size of a float: ", sizeof(float), " byte(s)\n");
	return (0);
}
