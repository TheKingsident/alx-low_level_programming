#include <stdlib.h>
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
	int cents;
	int num_coins;
	int num_coin_values;

	int coin_values[] = {25, 10, 5, 2, 1};

	num_coins = 0;
	num_coin_values = sizeof(coin_values) / sizeof(coin_values[0]);


	if (argc != 2)
	{
		printf("Error\n");

		return (1); }

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");

		return (0); }

	for (i = 0; i < num_coin_values; i++)
	{
		num_coins += cents / coin_values[i];

		cents %= coin_values[i]; }

	printf("%d\n", num_coins);

	return (0);
}
