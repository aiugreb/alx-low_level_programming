#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of the allocated memory
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	char *alloc;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	point = malloc(new_size);
	if (!point)
		return (NULL);

	alloc = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			point[i] = alloc[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			point[i] = alloc[i];
	}

	free(ptr);
	return (point);
}
