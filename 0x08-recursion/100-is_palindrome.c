#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string.
 * Return: The length of the string.
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);
	char *end = s + len - 1;

	while (s < end)
	{
	if (*s != *end)
		return (0);

	s++;
	end--;
	}

	return (1);
}
