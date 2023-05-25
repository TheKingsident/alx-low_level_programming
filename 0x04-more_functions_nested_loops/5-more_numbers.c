#include "main.h"


/**
 * more_numbers - Prints numbers to console
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{	int i = 0;
	int j;
	int k;
	char some_numbers[] = "0123456789";
	char more_numbers[] = "1011121314";

	while (i < 10)

	{	i++;
		for (j = 0; some_numbers[j] != '\0'; j++)
		{
			_putchar(some_numbers[j]); }
		for (k = 0; more_numbers[k] != '\0'; k++)
		{
			_putchar(more_numbers[k]); }

		_putchar('\n'); }


}
