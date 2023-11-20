#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: adress of pointer to first node
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}

