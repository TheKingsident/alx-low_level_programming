#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>


void print_alphabet(void)
{	int i;
	char something[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; something[i] != '\0'; i++)
{	putchar(something[i]); }

	putchar('\n');
}

#endif /* MAIN_H */
