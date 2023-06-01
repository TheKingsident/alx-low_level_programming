#include "main.h"
/**
 * reverse_array - Reverses the contents of an array
 *
 * @a: the array whose contents to reverse
 *
 * @n: number of contents in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int reversed;

	i = 0;

	for (i = 0; i < n / 2; i++)
	{
		reversed = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = reversed; }

}
