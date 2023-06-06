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
	int firstDiagonal;
	int secondDiagonal;

	firstDiagonal = 0;
	secondDiagonal = 0;

	for (i = 0; i < size; i++)
	{
		firstDiagonal += a[i * size + i]; }

	for (i = 0; i < size; i++)
	{
		secondDiagonal += a[i * size + (size - 1 - i)]; }


	printf("%d, %d\n", firstDiagonal, secondDiagonal);

}
