#include "function_pointers.h"
/**
 * print_name - Function to print a name
 *
 * @name: The name to be printed
 *
 * @f: Pointer to function that does the heavy lifting
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name); }

}
