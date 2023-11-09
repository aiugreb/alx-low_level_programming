#include "variadic_functions.h"

/**
 * print_numbers -  Prints numbers, followed by a new line. 
 * @separator: the string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed
 * Return:
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list x;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(x, n);
	while (i--)
		printf("%d%s", va_arg(x, int),
				i ? (separator ? separator : "") : "\n");
	va_end(x);
}
