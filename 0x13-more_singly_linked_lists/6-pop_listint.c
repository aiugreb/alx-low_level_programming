#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: value of popped node
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (num);
}

