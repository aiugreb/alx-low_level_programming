#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first node
 * @n: value for new node
 *
 * Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *node = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (node->next)
		node = node->next;

	node->next = new_n;

	return (new_n);
}
