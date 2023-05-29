#include "main.h"
#include <stdio.h>
/**
 * print_array - Displays the elements in an array
 *
 * @a: The array
 *
 * @n: Number of elements in the array
 */
void print_array(int *a, int n)
{
	int i;
	
	if (n <= 0)
        return;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		
		if (i != n - 1)
			
			printf(", "); }
	printf("\n");
}
