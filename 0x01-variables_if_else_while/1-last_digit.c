#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	int last_digit = abs(n) % 10;

	if (last_digit > 5)
{	printf("The last digit of %d is %d and is greater than 5\n",
	n, last_digit); }
	else if (last_digit == 0)
{	printf("The last digit of %d is %d and is 0\n", n, last_digit); }
	else if (last_digit < 6)
	&&(last_digit != 0)
{       printf("The last digit of %d is %d and is less than 6 and not 0\n",
	n, last_digit); }
	else
{	printf("The last digit is %d\n", n); }
	return (0);
}
