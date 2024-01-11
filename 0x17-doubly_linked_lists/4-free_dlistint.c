#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t
 * @head: head of double list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *current;

	start = head;
	while (start)
	{
		current = start->next;
		free(start);
		start = current;
	}
}
