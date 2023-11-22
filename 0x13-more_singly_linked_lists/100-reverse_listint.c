#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 *
 * Return: adress of head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = next;
	}
	*head = node;
	return (*head);
}
