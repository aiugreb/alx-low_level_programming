#include "main.h"
int check_palindrome(char *s, int len);
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = 0;
	char *end = s;

	while (*end != '\0')
	{
	end++;
	len++;
	}
	return (check_palindrome(s, len));
}

/**
 * check_palindrome - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 * @len: Length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
*/

int check_palindrome(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	if (*s != s[len - 1])
	{
		return (0);
	}
	return (check_palindrome(s + 1, len - 2));
}
