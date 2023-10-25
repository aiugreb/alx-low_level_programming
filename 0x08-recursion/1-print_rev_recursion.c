#include "main.h"

/**
 * _print_rev_recursion - main function
 * @s: function parameter
 *
 * Return: Always 0.
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
		_print rev recursion(s + 1);
		_putchar(*s);
}
