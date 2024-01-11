#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the dara (n)
 * @head: head of the list
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *prev = head;
	int i, sum = 0;

	for (i = 0; prev; i++)
	{
		sum += prev->n;
		prev = prev->next;
	}
	return (sum);
}
