#include "lists.h"

/**
 * dlistint_len - Return list len
 * @h: struct list
 * Return: list_len
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i;

	for (i = 0; current; i++)
	{
		current = current->next;
	}
	return (i);
}
