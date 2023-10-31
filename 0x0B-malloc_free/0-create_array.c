#include "main.h"
#include <stdlib.h>
/**
 * *create_array - that creates an array of chars
 * and initialzes it with a specific char.
 * @size: size of the array
 * @c: character initialized
 * Return: Returns a pointer to the array or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
	{
		return (0);
	}
	while (size--)
	{
		n[size] = c;
	}
	return (n);
}
