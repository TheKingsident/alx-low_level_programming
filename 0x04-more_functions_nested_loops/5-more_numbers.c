#include "main.h"


/**
 * more_numbers - Prints numbers to console
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{	int i = 0;
	int j;
	char more_numbers[] = "01234567891011121314";

	while (i < 11)

	{	i++;
		for (j = 0; more_numbers[j] != '\0'; j++)
		{
			_putchar(more_numbers[j]); }
		_putchar('\n'); }

	

}
