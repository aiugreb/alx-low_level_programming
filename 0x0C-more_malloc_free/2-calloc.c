#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements.
 * @size: The byte size of each array element
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 * Otherwise - a pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *nm;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nm = malloc(size * nmemb);

	if (nm == NULL)
		return (NULL);

	c = nm;

	for (i = 0; i < (size * nmemb); i++)
		c[i] = '\0';

	return (nm);
}
