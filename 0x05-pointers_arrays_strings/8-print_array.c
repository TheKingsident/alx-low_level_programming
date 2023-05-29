#include "main.h"
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
	int digit;
	int divisor;

	for (i = 0; i < n; i ++)
	{
		int numb = a[i];

		if (numb == 0)
		{
			_putchar('0'); }

		else if (numb < 0)
		{
			_putchar('-');
			numb = -numb; }

		
		divisor = 1;

		while (numb / divisor != 0)
		{
			divisor *= 10; }
		
		divisor /= 10;

		while (divisor != 0)
		{
			digit = numb / divisor;
			numb %= divisor;
			divisor /= 10;
			_putchar('0'+ digit); }

		if (i != n - 1)
		{
			_putchar(',');
	       		_putchar(' '); }

	_putchar(' '); }

	_putchar('\n');

}
