#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
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
	int num1;
	int num2;
	int result;
	int (*op_func)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		return (1); }

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (2); }

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
