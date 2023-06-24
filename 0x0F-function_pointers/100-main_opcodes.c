#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Function to print the opcodes of a given function
 * @func: Pointer to the function
 * @num_bytes: Number of bytes to print
 */
void print_opcodes(void (*func)(void), int num_bytes)
{
	int i;
	unsigned char *opcodes;

	opcodes = (unsigned char *)func;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", opcodes[i]); }

	printf("\n");
}

/**
 * print_main_opcodes - Function to print the opcodes of the main function
 */
void print_main_opcodes(void)
{
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 1 if arguments are incorrect, 2 if num_bytes is
 * negative
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1); }

	int num_bytes;

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");

		return (2); }

	print_opcodes(print_main_opcodes, num_bytes);

	return (0);
}
