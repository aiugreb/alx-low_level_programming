#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: int
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
	{
		exit(98);
	}

	return (x);
}
