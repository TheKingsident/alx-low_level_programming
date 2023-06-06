#include "main.h"
#include <stddef.h>
/**
 * set_string - Sets the value of a pointer to a char
 *
 * @s: Pointer value toi change
 *
 * @to: char to change into
 */
void set_string(char **s, char *to)
{
	if (s != NULL)
		*s = to;

}
