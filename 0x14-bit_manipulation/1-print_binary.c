#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int holder;
	int flag;

	holder = 1UL << (sizeof(unsigned long int) * 8 - 1);
	flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return; }

	while (holder)
	{
		if (n & holder)
		{
			_putchar('1');
			flag = 1; }

		else if (flag)
			_putchar('0');

		holder = holder >> 1;
	}

}
