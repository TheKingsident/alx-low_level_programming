#include "main.h"
#include <string.h>
/**
 * is_palindrome_recursive - Does the actual check to see if word is palindrome
 *
 * @s: The word
 *
 * @first: The first of the word
 *
 * @last: The end of the word
 *
 * Return: The result
 *
 */
int is_palindrome_recursive(char *s, int first, int last)
{
	if (first >= last)
	{
		return (1); }

	if (s[first] != s[last])
	{
		return (0); }

	return (is_palindrome_recursive(s, first + 1, last - 1));
}

/**
 * is_palindrome - Calls the helper function
 *
 * @s: The string/ word to check
 *
 * Return: The coresponding result
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
