#include <stdio.h>


void printToConsole(const char* something)
{	int i;

	for (i = 0; something[i] != '\0'; i++)
{	putchar(something[i]); }
}
