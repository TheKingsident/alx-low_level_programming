#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: The matrix
 *
 * @size: size of the matrix1
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int firstDiagonal;
	int secondDiagonal;

	firstDiagonal = 0;
	secondDiagonal = 0;

	for (i = 0; i < size; i++)
	{
		firstDiagonal += *((int *)a + i * size + 1); }

	for (j = 0; j < size; j++)
	{
		secondDiagonal += *((int *)a + (size - 1 - j) * size + j); }

	printf("%d, %d\n", firstDiagonal, secondDiagonal);

}
