#include "lists.h"

/**
 * list_len - dertermines lenght of linked lis
 * @h: pointer to first node
 *
 * Return: size of lists
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
