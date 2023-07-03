#include "lists.h"

/**
 * print_message - Prints a specific message before main is executed.
 *
 * Description: This function is executed automatically before the main
 */
void print_message(void) __attribute__((constructor));

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

